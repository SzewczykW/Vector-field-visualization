#pragma once

#include <wx/wxprec.h>
#include <wx/dcmemory.h>
#include <wx/dcclient.h>
#include <wx/dcbuffer.h>
#include <wx/colourdata.h>
#include <wx/colordlg.h>
#include <wx/filedlg.h>

#include "GUI.h"
#include "Settings.h"

class CoordinateSystem 
{
    public:
        CoordinateSystem ();
        void setSettings ( const Settings& settings );
        Settings& getSettings ();
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