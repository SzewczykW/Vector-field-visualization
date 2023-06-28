#include "CoordinateSystem.h"

CoordinateSystem::CoordinateSystem ()
{
    _Settings.SetXFun(funType::A);
    _Settings.SetYFun(funType::A);
    _Settings.SetZFun(funType::A);
    _Settings.SetA(1.0);
    _Settings.SetB(1.0);
    _Settings.SetC(1.0);
    _Settings.SetXMin(-5.0);
    _Settings.SetXMax(5.0);
    _Settings.SetYMin(-5.0);
    _Settings.SetYMax(5.0);
    _Settings.SetZMin(-5.0);
    _Settings.SetZMax(5.0);
    _Settings.SetXScale(1);
    _Settings.SetYScale(1);
    _Settings.SetZScale(1);
    _Settings.SetAutoScale(true);
    _Settings.SetArrowLength(1.0);
    _Settings.SetXRot(0.0);
    _Settings.SetYRot(0.0);
    _Settings.SetZRot(0.0);
}

void CoordinateSystem::setSettings ( const Settings& settings )
{
    _Settings = settings;
}

Settings& CoordinateSystem::getSettings ()
{
    return _Settings;
}

void CoordinateSystem::draw ( wxDC* dc, const double& width, const double& height ) const 
{
    dc->SetBackground ( wxBrush ( wxColour ( 255, 255, 255 ) ) );
    dc->Clear ();
    drawAxes ( dc, width, height );
    drawArrow ( dc, width, height );
    drawSurface ( dc, width, height );
    drawVectorField ( dc, width, height );
}

void CoordinateSystem::drawAxes ( wxDC* dc, const double& width, const double& height ) const
{
    auto leftDownCornerX = 0;
    auto leftDownCornerY = height;
    auto centerX = width / 2;
    auto centerY = height / 2;
    auto offsetX = width / 8;
    auto offsetY = height / 5;

    auto xMin = _Settings.GetXMin();
    auto xMax = _Settings.GetXMax();
    auto yMin = _Settings.GetYMin();
    auto yMax = _Settings.GetYMax();
    auto zMin = _Settings.GetZMin();
    auto zMax = _Settings.GetZMax();

    auto xScale = _Settings.GetXScale();
    auto yScale = _Settings.GetYScale();
    auto zScale = _Settings.GetZScale();
    
    auto xRot = _Settings.GetXRot();
    auto yRot = _Settings.GetYRot();
    auto zRot = _Settings.GetZRot();

    // Start and end points of the axes
    // x-axis
    auto XAxStartX = offsetX;
    auto XAxStartY = height - 2 * offsetY;
    auto XAxEndX = centerX;
    auto XAxEndY = height - offsetY;

    // length of the x-axis
    auto XAxLen = sqrt( pow( XAxEndX - XAxStartX, 2) + pow(XAxEndY - XAxStartY, 2) );

    // y-axis
    auto YAxStartX = XAxEndX;
    auto YAxStartY = XAxEndY;
    auto YAxEndX = XAxEndX + 0.9 * XAxLen * cos( M_PI / 6 );
    auto YAxEndY = XAxEndY - 0.9 * XAxLen * sin( M_PI / 6 );

    // length of the y-axis
    auto YAxLen = sqrt( pow( YAxEndX - YAxStartX, 2) + pow(YAxEndY - YAxStartY, 2) );

    // z-axis
    auto ZAxStartX = YAxEndX;
    auto ZAxStartY = YAxEndY;
    auto ZAxEndX = ZAxStartX;
    auto ZAxEndY = ZAxStartY - YAxLen;

    // Clear the background
    dc->SetBackground ( wxBrush ( *wxWHITE_BRUSH  ) );
    dc->Clear ();

    // Draw the axes
    // Draw red x-axis
    dc->SetPen ( wxPen ( wxColour ( 255, 0, 0 ) ) );
    dc->DrawLine ( XAxStartX, XAxStartY, XAxEndX, XAxEndY );
    // Draw green y-axis
    dc->SetPen ( wxPen ( wxColour ( 0, 255, 0 ) ) );
    dc->DrawLine ( YAxStartX, YAxStartY, YAxEndX, YAxEndY );
    // Draw blue z-axis
    dc->SetPen ( wxPen ( wxColour ( 0, 0, 255 ) ) );
    dc->DrawLine ( ZAxStartX, ZAxStartY, ZAxEndX, ZAxEndY );

    // Draw the axis ticks
    // Draw x-axis ticks
    dc->SetPen ( wxPen ( wxColour ( 0, 0, 0 ) ) );
    for (auto i = 0; i <= 10; i++)
    {
		auto x = XAxStartX + i * ( XAxEndX - XAxStartX ) / 10;
		auto y = XAxStartY + i * ( XAxEndY - XAxStartY ) / 10;
		dc->DrawLine ( x + 2.5, y, x - 2.5, y + 2.5 );
        dc->DrawText ( wxString::Format ( "%.1f", xMin + i * ( xMax - xMin ) / 10 ), x - 10, y + 5 );
	}
    // Draw y-axis ticks
    for (auto i = 0; i <= 10; i++)
    {
        auto x = YAxStartX + i * ( YAxEndX - YAxStartX ) / 10;
        auto y = YAxStartY + i * ( YAxEndY - YAxStartY ) / 10;
        dc->DrawLine ( x + 2.5, y, x - 2.5, y - 2.5 );
        dc->DrawText ( wxString::Format ( "%.1f", yMin + i * ( yMax - yMin ) / 10 ), x + 15, y + 5 );
    }
    // Draw z-axis ticks
    for (auto i = 0; i <= 10; i++)
    {
		auto x = ZAxStartX + i * ( ZAxEndX - ZAxStartX ) / 10;
		auto y = ZAxStartY + i * ( ZAxEndY - ZAxStartY ) / 10;
		dc->DrawLine ( x + 2.5, y, x - 2.5, y );
		dc->DrawText ( wxString::Format ( "%.1f", zMin + i * ( zMax - zMin ) / 10 ), x + 10, y - 10 );
	}
}

void CoordinateSystem::drawArrow ( wxDC* dc, const double& width, const double& height) const
{
    // Draw arrow
    //to chyba mozna by bylo jako jakies parametry zrobic, a nie zmienne lokalne w funkcjach
    auto leftDownCornerX = 0;
    auto leftDownCornerY = height;
    auto centerX = width / 2;
    auto centerY = height / 2;
    auto offsetX = width / 8;
    auto offsetY = height / 5;
    dc->SetPen(wxPen(wxColor(0, 0, 0)));
    auto xMin = _Settings.GetXMin();
    auto xMax = _Settings.GetXMax();
    auto yMin = _Settings.GetYMin();
    auto yMax = _Settings.GetYMax();
    auto zMin = _Settings.GetZMin();
    auto zMax = _Settings.GetZMax();
    auto xScale = _Settings.GetXScale();
    auto yScale = _Settings.GetYScale();
    auto zScale = _Settings.GetZScale();
    auto XAxStartX = offsetX;
    auto XAxStartY = height - 2 * offsetY;
    auto XAxEndX = centerX;
    auto XAxEndY = height - offsetY;
    auto XAxLen = sqrt(pow(XAxEndX - XAxStartX, 2) + pow(XAxEndY - XAxStartY, 2));
    auto YAxStartX = XAxEndX;
    auto YAxStartY = XAxEndY;
    auto YAxEndX = XAxEndX + 0.9 * XAxLen * cos(M_PI / 6);
    auto YAxEndY = XAxEndY - 0.9 * XAxLen * sin(M_PI / 6);
    auto YAxLen = sqrt(pow(YAxEndX - YAxStartX, 2) + pow(YAxEndY - YAxStartY, 2));
    auto ZAxStartX = YAxEndX;
    auto ZAxStartY = YAxEndY;
    auto ZAxEndX = ZAxStartX;
    auto ZAxEndY = ZAxStartY - YAxLen;
    for (int k = 0; k <= 2; k++) {
        auto h = k * (ZAxEndY - ZAxStartY) / 2;
        for (int j = 0; j <= 10; j++)
        {
            for (int i = 0; i <= 10; i++)
            {
                auto x = XAxStartX + i * (XAxEndX - XAxStartX) / 10 + j * (YAxEndX - YAxStartX) / 10;
                auto y = XAxStartY + i * (XAxEndY - XAxStartY) / 10 + j * (YAxEndY - YAxStartY) / 10;
                //wartosci x,y,z wzgledem ukladu wspolrzednych
                auto x1 = xMin + i * (xMax - xMin) / xScale;
                auto y1 = yMin + j * (yMax - yMin) / yScale;
                auto z1 = zMin + k * (zMax - zMin) / 2.0;
                //wartosc funkcji
                auto x2 = _Settings.Calc(0, x1);
                auto y2 = _Settings.Calc(1, y1);
                auto z2 = _Settings.Calc(2, z1);
                //nie mam w ogole pomyslu na to w jaki sposob ogarnac te zmienne x i y do rysowania, mam wrazenie ze something is no yes
                dc->DrawLine(x, y + h, x, y + h - z2);
                //5 jest magic numberem ktory zostanie potem zamieniony zeby te strzalki rysowac proporcjonalne w bok, ale musze wymyslic jakies rzutowanie tego x i y
                //zostana tez dodane warunki zeby nie rysowalo strzalek gdy ich dlugosc jest rowna 0
                dc->DrawLine(x, y + h - z2, x - 5, y + h - ((z2-z1) * 0.9));
                dc->DrawLine(x, y + h - z2, x + 5, y + h - ((z2-z1) * 0.9));
            }
        }
    }
}

void CoordinateSystem::drawSurface ( wxDC* dc, const double& width, const double& height) const
{
    // Draw surface

}

void CoordinateSystem::drawVectorField ( wxDC* dc, const double& width, const double& height ) const
{
    // Draw vector field
    
}

