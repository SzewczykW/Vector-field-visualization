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

    //_Settings =
    //{
    //    ._xFun = funType::A,
    //    ._yFun = funType::A,
    //    ._zFun = funType::A,
    //    ._a = 1.0,
    //    ._b = 1.0,
    //    ._c = 1.0,
    //    ._xMin = -5.0,
    //    ._xMax = 5.0,
    //    ._yMin = -5.0,
    //    ._yMax = 5.0,
    //    ._zMin = -5.0,
    //    ._zMax = 5.0,
    //    ._xScale = 1,
    //    ._yScale = 1,
    //    ._zScale = 1,
    //    ._isAutoScaled = true,
    //    ._arrowLen = 1.0,
    //    .xRot = 0.0,
    //    .yRot = 0.0,
    //    .zRot = 0.0,
    //    ._additionalSurface = false,
    //    ._xSurface = 0.0,
    //    ._ySurface = 0.0,
    //    ._zSurface = 0.0
    //};
}

void CoordinateSystem::setSettings ( const Settings& settings )
{
    _Settings = settings;
}

Settings& CoordinateSystem::getSettings ()
{
    return _Settings;
}

void CoordinateSystem::draw ( wxDC* dc ) const 
{
    dc->SetBackground ( wxBrush ( wxColour ( 255, 255, 255 ) ) );
    dc->Clear ();
    drawAxes ( dc );
    drawArrow ( dc );
    drawSurface ( dc );
    drawVectorField ( dc );
}

void CoordinateSystem::drawAxes ( wxDC* dc ) const
{
    // Draw axes
    dc->SetPen ( wxPen ( wxColour ( 0, 0, 0 ), 1 ) );
    //dc->DrawLine ( 0, 0, 0, 0, _Settings.GetXMax(), 0);
    //dc->DrawLine ( 0, 0, 0, 0, 0, _Settings.GetYMax() );
    //dc->DrawLine ( 0, 0, 0, 0, 0, 0, _Settings.GetZMax() );
}

void CoordinateSystem::drawArrow ( wxDC* dc ) const
{
    // Draw arrow
    dc->SetPen ( wxPen ( wxColour ( 255, 0, 0 ), 1 ) );
   // dc->DrawLine ( 0, 0, 0, 0, 0, 0, _Settings. );
}

void CoordinateSystem::drawSurface ( wxDC* dc ) const
{
    // Draw surface
    dc->SetPen ( wxPen ( wxColour ( 0, 0, 255 ), 1 ) );
    //dc->DrawLine ( 0, 0, 0, 0, 0, 0, _Settings.GetXSurface(), _Settings.GetYSurface(), _Settings.GetZSurface());
}

void CoordinateSystem::drawVectorField ( wxDC* dc ) const
{
    // Draw vector field
    dc->SetPen ( wxPen ( wxColour ( 0, 255, 0 ), 1 ) );
    //dc->DrawLine ( 0, 0, 0, 0, 0, 0, _Settings.GetXSurface(), _Settings.GetYSurface(), _Settings.GetZSurface());
}

