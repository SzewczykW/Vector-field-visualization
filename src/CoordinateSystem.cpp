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
    // Draw all

    dc->SetBackground ( wxBrush ( wxColour ( 255, 255, 255 ) ) );
    dc->Clear ();

    drawAxes ( dc, width, height );
    drawVectorField ( dc, width, height );
}

void CoordinateSystem::drawAxes ( wxDC* dc, const double& width, const double& height ) const
{
    // Draw axes

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


    auto lineX = drawLine ( dc, xMin, 0, 0, xMax, 0, 0, wxColor ( 255, 0, 0 ), width, height );

    auto lineY = drawLine ( dc, 0, yMin, 0, 0, yMax, 0, wxColor ( 0, 255, 0 ), width, height );

    auto lineZ = drawLine ( dc, 0, 0, zMin, 0, 0, zMax, wxColor ( 0, 0, 255 ), width, height );
}

void CoordinateSystem::drawVectorField ( wxDC* dc, const double& width, const double& height ) const
{
    // Draw vector field

    auto xMin = _Settings->GetXMin ();
    auto xMax = _Settings->GetXMax ();
    auto yMin = _Settings->GetYMin ();
    auto yMax = _Settings->GetYMax ();
    auto zMin = _Settings->GetZMin ();
    auto zMax = _Settings->GetZMax ();

    auto xSurface = _Settings->GetXSurface ();
    auto ySurface = _Settings->GetYSurface ();
    auto zSurface = _Settings->GetZSurface ();

    auto zFun = 2;
    auto yFun = 1;
    auto xFun = 0;

    auto xAxisScale = _Settings->GetXScale ();
    auto yAxisScale = _Settings->GetYScale ();
    auto zAxisScale = _Settings->GetZScale ();

    double xTick;
    double yTick;
    double zTick;

    try
    {
        xTick = ( xMax - xMin ) / xAxisScale;
    }
    catch ( std::exception& e )
    {
        xAxisScale = 5;
        xTick = ( xMax - xMin ) / xAxisScale;
    }
    try
    {
        yTick = ( yMax - yMin ) / yAxisScale;
    }
    catch ( std::exception& e )
    {
        yAxisScale = 5;
        yTick = ( yMax - yMin ) / yAxisScale;
    }
    try
    {
        zTick = ( zMax - zMin ) / zAxisScale;
    }
    catch ( std::exception& e )
    {
        zAxisScale = 3;
        zTick = ( zMax - zMin ) / zAxisScale;
    }

    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double z1 = 0;
    double z2 = 0;

    // Drawing vector field iterating through all points 
    // from *Min to *Max with step *Tick
    for ( int k = 0; k < zAxisScale; k++ )
    {
        z1 = zMin + k * zTick;
        z2 = _Settings->Calc ( zFun, z1 );

        for ( int j = 0; j < yAxisScale; j++ )
        {
            y1 = yMin + j * yTick;
            y2 = _Settings->Calc ( yFun, y1 );

            for ( int i = 0; i < xAxisScale; i++ )
            {
                x1 = xMin + i * xTick;
                x2 = _Settings->Calc ( xFun, x1 );
                if ( _Settings->IsAdditionalSurface () )
                {
                    auto Sign = xSurface * x1 + ySurface * y1 + zSurface * z1;
                    auto Distance = Sign / ( sqrt ( pow ( xSurface, 2 ) + pow ( ySurface, 2 ) + pow ( zSurface, 2 ) ) );
                    if ( Distance > 0 || Sign == 0 )
                    {
                        drawArrow ( dc, x1, y1, z1, x2, y2, z2, width, height );
                    }
                }
                else
                {
                    drawArrow ( dc, x1, y1, z1, x2, y2, z2, width, height );
                }
            }
        }
    }

}

void CoordinateSystem::drawArrow ( wxDC* dc, const double& x1, const double& y1, const double& z1, const double& x2,
                                   const double& y2, const double& z2, const double& width, const double& height ) const
{

    // Draw arrow
    auto len = sqrt ( pow ( x2 - x1, 2 ) + pow ( y2 - y1, 2 ) + pow ( z2 - z1, 2 ) );
    auto color = wxColor ( 0, 0, 0 );

    Vector4D v1 ( x1, y1, z1 ), v2 ( x2, y2, z2 );

    if ( _Settings->isAutoScaled () == false )
    {
        v2 = v2 * ( ( len * ( _Settings->GetArrowLength () + 1.0 ) / 10.0 ) / len );
    }
    else
    {
        // blue for function min, red for function max
        color = wxColor ( 255 * _Settings->norm ( x1, y1, z1 ) / _Settings->GetMax (), 0, 255 * ( 1 - _Settings->norm ( x1, y1, z1 ) / _Settings->GetMax () ) );
    }

    Vector4D v3 ( v1 + v2 );
    auto arrow = drawLine ( dc, v1.getX (), v1.getY (), v1.getZ (), v3.getX (), v3.getY (), v3.getZ (), color, width, height );

    auto dx = arrow.end.x - arrow.start.x;
    auto dy = arrow.end.y - arrow.start.y;
    auto arrowAngle = atan2 ( dy, dx );
    auto arrowSkew = 35 * M_PI / 180.0;

    dc->DrawLine ( arrow.end.x, arrow.end.y, arrow.end.x - 8 * 0.9 * cos ( arrowAngle + arrowSkew ), arrow.end.y - 8 * 0.9 * sin ( arrowAngle + arrowSkew ) );
    dc->DrawLine ( arrow.end.x, arrow.end.y, arrow.end.x - 8 * 0.9 * cos ( arrowAngle - arrowSkew ), arrow.end.y - 8 * 0.9 * sin ( arrowAngle - arrowSkew ) );
}

Projection CoordinateSystem::project ( const double& x, const double& y, const double& z,
                                       const double& width, const double& height ) const
{
    // Projection

    Projection projection;
    Matrix projectionMatrix ( 4, 4 );
    Vector4D input ( x, y, z );

    //matrix to translate our coordinate system to center of screen

    auto translation = _Settings->GetTranslationMatrix ( 256 * width, -height * 192, 0.0 );

    //rotation matrices
    auto rotationX = _Settings->GetXRotMatrix ();
    auto rotationY = _Settings->GetYRotMatrix ();
    auto rotationZ = _Settings->GetZRotMatrix ();

    //scaling coord system so it would be readable
    auto scale = _Settings->GetScaleMatrix ( width * 20.0, height * 20.0, width * 20.0 );

    //transformation matrix
    auto transform = translation * rotationX * rotationY * rotationZ * scale;

    //projection matrix parameters
    //near and far
    double n = width / 2; // near has to be positive
    double f = -height / 2; // far has to be negative
    //left, right, top, bottom are set to width and height of screen
    double l = 0;
    double r = width;
    double t = 0;
    double b = height;

    projectionMatrix.set ( 0, 0, 2.0 / ( r - l ) );
    projectionMatrix.set ( 1, 1, 2.0 / ( t - b ) );
    projectionMatrix.set ( 2, 2, -1.0 );
    projectionMatrix.set ( 3, 0, ( r + l ) / ( l - r ) );
    projectionMatrix.set ( 3, 1, ( t + b ) / ( b - t ) );
    projectionMatrix.set ( 3, 3, 1.0 );

    auto transformedPos = projectionMatrix * transform * input;

    projection.x = transformedPos.getX ();
    projection.y = transformedPos.getY ();
    return projection;
}

Line CoordinateSystem::drawLine ( wxDC* dc, const double& x1, const double& y1, const double& z1,
                                  const double& x2, const double& y2, const double& z2, const wxColor& color,
                                  const double& width, const double& height ) const
{
    dc->SetPen ( wxPen ( color, 2 ) );

    Vector4D v1 ( x1, y1, z1 );
    Vector4D v2 ( x2, y2, z2 );

    auto p1 = project ( v1.getX (), v1.getY (), v1.getZ (), width, height );
    auto p2 = project ( v2.getX (), v2.getY (), v2.getZ (), width, height );
    auto line = Line ( p1, p2 );

    dc->DrawLine ( p1.x, p1.y, p2.x, p2.y );
    return line;
}
