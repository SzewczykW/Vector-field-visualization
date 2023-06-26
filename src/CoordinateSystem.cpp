#include "CoordinateSystem.h"

CoordinateSystem::CoordinateSystem ()
{
    _Settings =
    {
        ._xFun = funType::A,
        ._yFun = funType::A,
        ._zFun = funType::A,
        ._a = 1.0,
        ._b = 1.0,
        ._c = 1.0,
        ._xMin = -5.0,
        ._xMax = 5.0,
        ._yMin = -5.0,
        ._yMax = 5.0,
        ._zMin = -5.0,
        ._zMax = 5.0,
        ._xScale = 1,
        ._yScale = 1,
        ._zScale = 1,
        ._isAutoScaled = true,
        ._arrowLen = 1.0,
        .xRot = 0.0,
        .yRot = 0.0,
        .zRot = 0.0,
        ._additionalSurface = false,
        ._xSurface = 0.0,
        ._ySurface = 0.0,
        ._zSurface = 0.0
    };
}

void CoordinateSystem::setSettings ( const Settings& settings )
{
    _Settings = settings;
}

Settings CoordinateSystem::getSettings () const
{
    return _Settings;
}

void CoordinateSystem::draw ( wxDC* dc )
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
    dc->DrawLine ( 0, 0, 0, 0, _Settings._xMax, 0 );
    dc->DrawLine ( 0, 0, 0, 0, 0, _Settings._yMax );
    dc->DrawLine ( 0, 0, 0, 0, 0, 0, _Settings._zMax );
}

void CoordinateSystem::drawArrow ( wxDC* dc ) const
{
    // Draw arrow
    dc->SetPen ( wxPen ( wxColour ( 255, 0, 0 ), 1 ) );
    dc->DrawLine ( 0, 0, 0, 0, 0, 0, _Settings._arrowLen );
}

void CoordinateSystem::drawSurface ( wxDC* dc ) const
{
    // Draw surface
    dc->SetPen ( wxPen ( wxColour ( 0, 0, 255 ), 1 ) );
    dc->DrawLine ( 0, 0, 0, 0, 0, 0, _Settings._xSurface, _Settings._ySurface, _Settings._zSurface );
}

void CoordinateSystem::drawVectorField ( wxDC* dc ) const
{
    // Draw vector field
    dc->SetPen ( wxPen ( wxColour ( 0, 255, 0 ), 1 ) );
    dc->DrawLine ( 0, 0, 0, 0, 0, 0, _Settings._xSurface, _Settings._ySurface, _Settings._zSurface );
}

