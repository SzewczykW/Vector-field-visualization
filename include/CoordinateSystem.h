#pragma once

#include <wx/wxprec.h>
#include <wx/dcmemory.h>
#include <wx/dcclient.h>
#include <wx/dcbuffer.h>
#include <wx/colourdata.h>
#include <wx/colordlg.h>
#include <wx/filedlg.h>
#include <wx/geometry.h>

#include "GUI.h"
#include "Settings.h"

struct Projection {
    double x;
    double y;
};

class CoordinateSystem {
    public:
    CoordinateSystem ();
    void setSettings ( Settings* settings );
    Settings* getSettings ();
    void draw ( wxDC* dc, const double& width, const double& height ) const;
    void drawAxes ( wxDC* dc, const double& width, const double& height ) const;
    void drawArrow ( wxDC* dc, const double& x, const double& y, const double& z ) const;
    void drawSurface ( wxDC* dc, const double& width, const double& height ) const;
    void drawVectorField ( wxDC* dc, const double& width, const double& height ) const;
    void drawLine ( wxDC* dc, const Matrix& t, const double& x1, const double& y1, const double& z1,
                    const double& x2, const double& y2, const double& z2, const wxColor& color) const;
    Projection project ( const double& x, const double& y, const double& z, const double& focalLength = 10.0 ) const;
    private:
    /**
     * @brief Settings of the coordinate system.
     *
     */
    Settings* _Settings;
};
