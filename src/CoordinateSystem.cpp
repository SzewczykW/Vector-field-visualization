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
    drawAxes ( dc, width, height );
    drawArrow ( dc, width, height, 0 );
    drawSurface ( dc, width, height );
    drawVectorField ( dc, width, height );
}

void applyRotation ( int& x, int& y, int& z, double cosX, double sinX, double cosZ, double sinZ )
{
    // Obrót względem osi x
    double yRotated = y * cosX - z * sinX;
    double zRotated = y * sinX + z * cosX;

    // Obrót względem osi z
    double xRotated = x * cosZ - zRotated * sinZ;
    zRotated = x * sinZ + zRotated * cosZ;

    x = xRotated;
    y = yRotated;
    z = zRotated;
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

    //TRANSFROMATION MATRIX = projection * rotation * input
    //najpierw rzutowanie potem obracanie
    auto t = _Settings->GetXRotMatrix ();

    drawLine ( dc, t, xMin, 0, 0, xMax, 0, 0, wxColor(255, 0, 0), width, height);

    t = _Settings->GetYRotMatrix();
    drawLine ( dc, t, 0, yMin, 0, 0, yMax, 0, wxColor(0, 255, 0), width, height);

    t = _Settings->GetZRotMatrix();
    drawLine ( dc, t, 0, 0, zMin, 0, 0, zMax, wxColor(0, 0, 255), width, height);
}

void CoordinateSystem::drawArrow ( wxDC* dc, const double& x, const double& y, const double& z ) const
{
    // Draw arrow
    //to chyba mozna by bylo jako jakies parametry zrobic, a nie zmienne lokalne w funkcjach

    if ( _Settings->isAutoScaled () )
        z;

}

void CoordinateSystem::drawSurface ( wxDC* dc, const double& width, const double& height ) const
{
    // Draw surface

}

void CoordinateSystem::drawVectorField ( wxDC* dc, const double& width, const double& height ) const
{
    // Draw vector field

    // auto leftDownCornerX = 0;
    // auto leftDownCornerY = height;
    // auto centerX = width / 2;
    // auto centerY = height / 2;
    // auto offsetX = width / 8;
    // auto offsetY = height / 5;
    // dc->SetPen(wxPen(wxColor(0, 0, 0)));
    // auto xMin = _Settings->GetXMin();
    // auto xMax = _Settings->GetXMax();
    // auto yMin = _Settings->GetYMin();
    // auto yMax = _Settings->GetYMax();
    // auto zMin = _Settings->GetZMin();
    // auto zMax = _Settings->GetZMax();
    // auto xScale = _Settings->GetXScale();
    // auto yScale = _Settings->GetYScale();
    // auto zScale = _Settings->GetZScale();
    // auto XAxStartX = offsetX;
    // auto XAxStartY = height - 2 * offsetY;
    // auto XAxEndX = centerX;
    // auto XAxEndY = height - offsetY;
    // auto XAxLen = sqrt(pow(XAxEndX - XAxStartX, 2) + pow(XAxEndY - XAxStartY, 2));
    // auto YAxStartX = XAxEndX;
    // auto YAxStartY = XAxEndY;
    // auto YAxEndX = XAxEndX + 0.9 * XAxLen * cos(M_PI / 6);
    // auto YAxEndY = XAxEndY - 0.9 * XAxLen * sin(M_PI / 6);
    // auto YAxLen = sqrt(pow(YAxEndX - YAxStartX, 2) + pow(YAxEndY - YAxStartY, 2));
    // auto ZAxStartX = YAxEndX;
    // auto ZAxStartY = YAxEndY;
    // auto ZAxEndX = ZAxStartX;
    // auto ZAxEndY = ZAxStartY - YAxLen;
    // for (int k = 0; k <= 2; k++) {
    //     auto h = k * (ZAxEndY - ZAxStartY) / 2;
    //     for (int j = 0; j <= 10; j++)
    //     {
    //         for (int i = 0; i <= 10; i++)
    //         {
    //             auto x = XAxStartX + i * (XAxEndX - XAxStartX) / 10 + j * (YAxEndX - YAxStartX) / 10;
    //             auto y = XAxStartY + i * (XAxEndY - XAxStartY) / 10 + j * (YAxEndY - YAxStartY) / 10;
    //             //wartosci x,y,z wzgledem ukladu wspolrzednych
    //             auto x1 = xMin + i * (xMax - xMin) / xScale;
    //             auto y1 = yMin + j * (yMax - yMin) / yScale;
    //             auto z1 = zMin + k * (zMax - zMin) / 2.0;
    //             //wartosc funkcji
    //             auto x2 = _Settings->Calc(0, x1);
    //             auto y2 = _Settings->Calc(1, y1);
    //             auto z2 = _Settings->Calc(2, z1);
    //             //nie mam w ogole pomyslu na to w jaki sposob ogarnac te zmienne x i y do rysowania, mam wrazenie ze something is no yes
    //             dc->DrawLine(x, y + h, x, y + h - z2);
    //             //5 jest magic numberem ktory zostanie potem zamieniony zeby te strzalki rysowac proporcjonalne w bok, ale musze wymyslic jakies rzutowanie tego x i y
    //             //zostana tez dodane warunki zeby nie rysowalo strzalek gdy ich dlugosc jest rowna 0
    //             dc->DrawLine(x, y + h - z2, x - 5, y + h - ((z2-z1) * 0.9));
    //             dc->DrawLine(x, y + h - z2, x + 5, y + h - ((z2-z1) * 0.9));
    //         }
    //     }
    // }
}

Projection CoordinateSystem::project ( const double& x, const double& y, const double& z,
                                    const double& width, const double& height, const Matrix& rotation) const
{
    Projection projection = {};
    Matrix proj(4, 4);
    Vector4D input(x, y, z);
    Matrix transform(4, 4), scale(4, 4);

    //matrix to translate our coordinate system to center of screen
    transform = transform.translate(width / 96.0, -width / 96.0, 0);

    //scaling coord system so it would be readable
    scale.set(0, 0, width / 16.0);
    scale.set(1, 1, width / 16.0);
    scale.set(2, 2, width / 16.0);
    scale.set(3, 3, 1.0);
    
    //values were choosen using trail and error method probably could be done better
    transform = scale * transform;

    //projection matrix parameters
    double n = width / 2.0; //literally dont know why this works, changing 2 to bigger number enlengthens z-axis and placement so its really sensitive
    double f = width;
    double l = 0;
    double r = width;
    double t = 0;
    double b = height;    

    proj.set(0, 0, 2 * n / (r - l));
    proj.set(1, 1, 2 * n / (t - b));
    proj.set(0, 2, (r + l) / (r - l));
    proj.set(1, 2, (t + b) / (t - b));
    proj.set(2, 3, -2 * f * n / (f - n));
    proj.set(2, 2, -(f + n) / (f - n));
    proj.set(3, 2, -1.0);

    //rotation doesnt work yet 
    Vector4D transformedPos(rotation * proj * transform * input);

    projection.x = transformedPos.getX();
    projection.y = transformedPos.getY();
    return projection;
}

void CoordinateSystem::drawLine ( wxDC* dc, const Matrix& t, const double& x1, const double& y1, const double& z1,
                                  const double& x2, const double& y2, const double& z2, const wxColor& color, 
                                  const double& width, const double& height) const
{
    dc->SetPen(wxPen(color));
    Vector4D v1 ( x1, y1, z1 );
    Vector4D v2 ( x2, y2, z2 );

    auto p1 = project ( v1.getX (), v1.getY (), v1.getZ (), width, height, t );
    auto p2 = project ( v2.getX (), v2.getY (), v2.getZ () , width, height, t);

    dc->DrawLine ( p1.x, p1.y, p2.x, p2.y );
}