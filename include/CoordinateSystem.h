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

/**
 * @brief Struct for projections
 *
 */
struct Projection {
    double x;
    double y;
};

/**
 * @brief Struct for lines
 *
 */
struct Line {
    Projection start;
    Projection end;
};

/**
 * @brief Class for coordinate system and vector field
 * and it's settings
 */
class CoordinateSystem {
    public:
    /**
     * @brief Construct a new Coordinate System object
     *
     */

    CoordinateSystem ();
    /**
     * @brief Destroy the Coordinate System object
     *
     */
    ~CoordinateSystem ();

    /**
     * @brief Setters and getters for settings
     *
     * @param settings - pointer to Settings
     * @return Settings* - pointer to settings
     */
    void setSettings ( Settings* settings );
    Settings* getSettings ();

    /**
     * @brief method for drawing coordinate system and vector field
     *
     * @param dc - pointer to wxDC
     * @param width, height - width and height of the window
     */
    void draw ( wxDC* dc, const double& width, const double& height ) const;

    /**
     * @brief method for drawing coordinate system
     *
     * @param dc - pointer to wxDC
     * @param width, height - width and height of the window
     */
    void drawAxes ( wxDC* dc, const double& width, const double& height ) const;

    /**
     * @brief method for drawing arrows at the ond of each
     * line from vector field
     *
     * @param dc - pointer to wxDC
     * @param width, height - width and height of the window
     * @param x1, y1, z1, x2, y2, z2 - coordinates of the line (where x1, y1, z1 are the start of the line from iteration
     * and x2, y2, z2 are the end of the line from the calculation of vector function)
     */
    void drawArrow ( wxDC* dc, const double& x1, const double& y1, const double& z1,
                     const double& x2, const double& y2, const double& z2, const double& width, const double& height ) const;

    /**
     * @brief method for drawing vector field
     *
     * @param dc - pointer to wxDC
     * @param width, height - width and height of the window
     */
    void drawVectorField ( wxDC* dc, const double& width, const double& height ) const;

    /**
     * @brief method for drawing lines in 2D using projection
     *
     * @param dc - pointer to wxDC
     * @param width, height - width and height of the window
     * @param x1, y1, z1, x2, y2, z2 - coordinates of the line (where x1, y1, z1 are the start of the line from iteration
     * and x2, y2, z2 are the end of the line from the calculation of vector function)
     * @param color - color of the line
     * @return Line - struct with start and end of the line
     */
    Line drawLine ( wxDC* dc, const double& x1, const double& y1, const double& z1,
                    const double& x2, const double& y2, const double& z2, const wxColor& color,
                    const double& width, const double& height ) const;

    /**
     * @brief Projection from 3D to 2D
     *
     * @param width, height - width and height of the window
     * @param x, y, z - coordinates of the point
     * @return Projection
     */
    Projection project ( const double& x, const double& y, const double& z, const double& width, const double& heigh ) const;

    private:
    /**
     * @brief pointer to Settings of the coordinate system
     * and vector field
     *
     */
    Settings* _Settings;
};
