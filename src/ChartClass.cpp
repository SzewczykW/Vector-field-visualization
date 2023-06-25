#include <wx/dc.h>
#include "ChartClass.h"

Chart::Chart(GUIMyFrame1* wnd) {
	MainWnd = wnd;
	xFun = yFun = zFun = 0;
	_a = _b = _c = 1;
	xMin = yMin = zMin = -5;
	xMax = yMax = zMax = 5;	
	xScale = yScale = zScale = 10;
	arrowLen = 1;
	autoLen = true;
	xRot = yRot = zRot = 0;
	surface = false;
	xSurface = ySurface = zSurface = 0;
}
