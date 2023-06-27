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

Settings CoordinateSystem::getSettings () const
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
}

void CoordinateSystem::drawArrow ( wxDC* dc ) const
{
    // Draw arrow
    dc->SetPen ( wxPen ( wxColour ( 255, 0, 0 ), 1 ) );
}

void CoordinateSystem::drawSurface(wxDC* dc) const
{
    // Draw surface
    dc->SetPen(wxPen(wxColour(0, 0, 255), 1));
}

void CoordinateSystem::drawVectorField ( wxDC* dc ) const
{
    // Draw vector field
    dc->SetPen ( wxPen ( wxColour ( 0, 255, 0 ), 1 ) );
}

