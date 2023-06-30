#include "CoordinateSystem.h"

CoordinateSystem::CoordinateSystem ()
    : _Settings ( new Settings () )
{
    _Settings->SetXFun ( funType::A );
    _Settings->SetYFun ( funType::A );
    _Settings->SetZFun ( funType::A );
    _Settings->SetA ( 1.0 );
    _Settings->SetB ( 1.0 );
    _Settings->SetC ( 1.0 );
    _Settings->SetXMin ( -5.0 );
    _Settings->SetXMax ( 5.0 );
    _Settings->SetYMin ( -5.0 );
    _Settings->SetYMax ( 5.0 );
    _Settings->SetZMin ( -5.0 );
    _Settings->SetZMax ( 5.0 );
    _Settings->SetXScale ( 1 );
    _Settings->SetYScale ( 1 );
    _Settings->SetZScale ( 1 );
    _Settings->SetAutoScale ( true );
    _Settings->SetArrowLength ( 1.0 );
    _Settings->SetXRot ( 0.0 );
    _Settings->SetYRot ( 0.0 );
    _Settings->SetZRot ( 0.0 );
}

CoordinateSystem::~CoordinateSystem ()
{
    delete _Settings;
}

void CoordinateSystem::setSettings ( Settings* settings )
{
    _Settings = settings;
}

Settings* CoordinateSystem::getSettings ()
{
    return _Settings;
}

void CoordinateSystem::draw ( wxDC* dc, const double& width, const double& height ) const
{
    dc->SetBackground ( wxBrush ( wxColour ( 255, 255, 255 ) ) );
    dc->Clear ();
    // tutaj trzeba ogarnac czemu z z y sa zamienione (y - zielone, z - niebieski)
    drawAxes ( dc, width, height );
    drawArrow ( dc, width, height, 0 );
    drawSurface ( dc, width, height );
    //drawVectorField ( dc, width, height );
}

void CoordinateSystem::drawAxes ( wxDC* dc, const double& width, const double& height ) const
{
    auto centerX = width / 2;
    auto centerY = height / 2;
    auto offsetX = width / 8;
    auto offsetY = height / 5;

    auto xMin = _Settings->GetXMin ();
    auto xMax = _Settings->GetXMax ();
    auto yMin = _Settings->GetYMin ();
    auto yMax = _Settings->GetYMax ();
    auto zMin = _Settings->GetZMin ();
    auto zMax = _Settings->GetZMax ();

    // tutaj bym obliczał scale matrix dla każdej osi (czyli trzeba dodać argument do drawLine i projection imo)

    auto lineX = drawLine ( dc, xMin, 0, 0, xMax, 0, 0, wxColor ( 255, 0, 0 ), width, height );
    // Problem drawing the ticks with rotation
    //   //draw arrows at the end of the line
    //   dc->DrawLine ( lineX.end.x - 5, lineX.end.y - 2.5, lineX.end.x, lineX.end.y);
    //   dc->DrawLine ( lineX.end.x - 5, lineX.end.y + 2.5, lineX.end.x, lineX.end.y);
    //   //draw ticks
    //   auto tickScreen = ( lineX.end.x - lineX.start.x ) / 10;
    //   auto tickValue = ( xMax - xMin ) / 10;
    //   for (auto i = 0; i < 10; i++)
    //   {
	//	dc->DrawLine ( lineX.start.x + i * tickScreen, lineX.start.y - 2.5, lineX.start.x + i * tickScreen, lineX.start.y + 2.5 );
	//	dc->DrawText ( wxString::Format( wxT("%.2lf", xMin + tickValue * i)), lineX.start.x + i * tickScreen, lineX.start.y + 10);
	//}

    drawLine ( dc, 0, yMin, 0, 0, yMax, 0, wxColor ( 0, 255, 0 ), width, height );

    drawLine ( dc, 0, 0, zMin, 0, 0, zMax, wxColor ( 0, 0, 255 ), width, height );
}

void CoordinateSystem::drawArrow ( wxDC* dc, const double& x, const double& y, const double& z ) const
{
    // Draw arrow

    // spróbuj tą metodę zedytować tak, żeby przyjmowała jako argumenty współrzędne punktu początkowego i końcowego
    // dla danej strzałki i potem na bazie modułu tej strzałki skalowała to do wielkosci ekranu, czyli tak jak w 
    // project
    // auto scale = _Settings->GetScaleMatrix(width/16.0, height/16.0, (width + height) / 16.0)
    // tyle, że tu trzeba to zrobić (tak przynajmniej mi się wydaje) przed użyciem project, albo zmienic project tak,
    // żeby przyjmował macierz scale jako argument i później będziesz wywoływać tą metodę z poziomu drawVectorField

}

void CoordinateSystem::drawSurface ( wxDC* dc, const double& width, const double& height ) const
{
    // Draw surface

    // tutaj bedzie odciannie powierzchni, ale to juz pozniej
}

void CoordinateSystem::drawVectorField ( wxDC* dc, const double& width, const double& height ) const
{
    // Draw vector field

    auto xMin = _Settings->GetXMin();
    auto xMax = _Settings->GetXMax();
    auto yMin = _Settings->GetYMin();
    auto yMax = _Settings->GetYMax();
    auto zMin = _Settings->GetZMin();
    auto zMax = _Settings->GetZMax();

    auto zFun = 2;
    auto yFun = 1;
    auto xFun = 0;

    auto zTick = (zMax - zMin) / 3.0;
    auto yTick = (yMax - yMin) / 10.0;
    auto xTick = (xMax - xMin) / 10.0;

    for (int k = 0; k <= 3; k++)
    {
        double z1 = zMin + k * zTick;
        double z2 = _Settings->Calc(zFun, z1);

        for (int j = 0; j <= 10; j++)
        {
            double y1 = yMin + j * yTick;
            double y2 = _Settings->Calc(yFun, y1);

            for (int i = 0; i <= 10; i++)
            {
                double x1 = xMin + i * xTick;
                double x2 = _Settings->Calc(xFun, x1);
                // to zwraca strukture Line, która zawiera punkt początkowy i końcowy
                // można (a nawet trzeba) to wykorzystać do rysowania strzałek
                drawLine(dc, x1, y1, z1, x2, y2, z2, wxColor(0, 0, 0), width, height);
            }
        }
    }

}

Projection CoordinateSystem::project ( const double& x, const double& y, const double& z,
                                       const double& width, const double& height ) const
{
    // Projection
    //TRANSFROMATION MATRIX = projection * rotation * input

    Projection projection;
    Matrix projectionMatrix ( 4, 4 );
    Vector4D input ( x, y, z );

    //matrix to translate our coordinate system to center of screen
    auto translation = _Settings->GetTranslationMatrix ( width / 2.0, -width / 2.0, 0 );

    //rotation matrices
    auto rotationX = _Settings->GetXRotMatrix ();
    auto rotationY = _Settings->GetYRotMatrix ();
    auto rotationZ = _Settings->GetZRotMatrix ();

    //scaling coord system so it would be readable
    auto scale = _Settings->GetScaleMatrix(width/16.0, width/16.0, width / 16.0);

    //transformation matrix
    auto transform = translation * rotationX * rotationY * rotationZ * scale;

    //projection matrix parameters
    //near and far
    double n = width/2; // near has to be positive and different than absolute value of far
    double f = -height/2; // far has to be negative
    //left, right, top, bottom are set to width and height of screen
    double l = 0;
    double r = width;
    double t = 0;
    double b = height;

    projectionMatrix.set ( 0, 0, 2.0 * n / ( r - l ) );
    projectionMatrix.set ( 1, 1, 2.0 * n / ( t - b ) );
    projectionMatrix.set ( 0, 2, ( r + l ) / ( r - l ) );
    projectionMatrix.set ( 1, 2, ( t + b ) / ( t - b ) );
    projectionMatrix.set ( 2, 2, -( f + n ) / ( f - n ) );
    projectionMatrix.set ( 2, 3, -2.0 * f * n / ( f - n ) );
    projectionMatrix.set ( 3, 2, -1.0 );

    auto transformedPos = projectionMatrix * transform * input;

    projection.x = transformedPos.getX ();
    projection.y = transformedPos.getY ();
    return projection;
}

Line CoordinateSystem::drawLine ( wxDC* dc, const double& x1, const double& y1, const double& z1,
                                  const double& x2, const double& y2, const double& z2, const wxColor& color,
                                  const double& width, const double& height ) const
{
    dc->SetPen ( wxPen ( color ) );
    Vector4D v1 ( x1, y1, z1 );
    Vector4D v2 ( x2, y2, z2 );

    auto p1 = project ( v1.getX (), v1.getY (), v1.getZ (), width, height );
    auto p2 = project ( v2.getX (), v2.getY (), v2.getZ (), width, height );
    auto line = Line ( p1, p2 );

    dc->DrawLine ( p1.x, p1.y, p2.x, p2.y );
    return line;
}

// TODO: firstly zajmij się tą zamianą z z y, bo tam będzie dużo rzeczy psuć
// potem zajmij się tym, żeby to rysowało to pole wektorowe
// a jak ci zostanie czasu to mozesz pobawic sie powiererzchniami odcinania