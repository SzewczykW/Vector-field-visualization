#pragma once

#include "GUI.h"
#include "Settings.h"

class CoordinateSystem 
{
    public:
        CoordinateSystem ();
        void setSettings ( const Settings& settings );
        Settings& getSettings () ;
        void draw ( wxDC* dc ) const;
        void drawAxes ( wxDC* dc ) const;
        void drawArrow ( wxDC* dc ) const;
        void drawSurface ( wxDC* dc ) const;
        void drawVectorField ( wxDC* dc ) const;
    private:
        /**
         * @brief Settings of the coordinate system.
         * 
         */
        Settings _Settings;
};