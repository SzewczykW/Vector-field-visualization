#pragma once
#include "GUIMyFrame1.h"


class Chart {
public:
	Chart(GUIMyFrame1* wnd);
	void SetXFun(int i) { xFun = i; }
	void SetYFun(int i) { yFun = i; }
	void SetZFun(int i) { zFun = i; }
	int GetXFun() const { return xFun; }
	int GetYFun() const { return yFun; }
	int GetZFun() const { return zFun; }
	void SetA(double a) { _a = a; }
	void SetB(double b) { _b = b; }
	void SetC(double c) { _c = c; }
	double GetA() const { return _a; }
	double GetB() const { return _b; }
	double GetC() const { return _c; }
	void SetXMin(double x) { xMin = x; }
	void SetXMax(double x) { xMax = x; }
	void SetYMin(double y) { yMin = y; }
	void SetYMax(double y) { yMax = y; }
	void SetZMin(double z) { zMin = z; }
	void SetZMax(double z) { zMax = z; }
	double GetXMin() const { return xMin; }
	double GetXMax() const { return xMax; }
	double GetYMin() const { return yMin; }
	double GetYMax() const { return yMax; }
	double GetZmin() const { return zMin; }
	double GetZMax() const { return zMax; }
	void SetXScale(int x) { xScale = x; }
	void SetYScale(int y) { xScale = y; }
	void SetZScale(int z) { xScale = z; }
	int GetXScale() const { return xScale; }
	int GetYScale() const { return yScale; }
	int GetZScale() const { return zScale; }
	void SetAutoLen(bool b) { autoLen = b; }
	bool AutoLen() const { return autoLen; }
	void SetXRot(double x) { xRot = x; }
	void SetYRot(double y) { yRot = y; }
	void SetZRot(double z) { zRot = z; }
	double GetXRot() const { return xRot; }
	double GetYRot() const { return yRot; }
	double GetZRot() const { return zRot; }
	void setSurface(bool b) { surface = b; }
	bool Surface() const { return surface; }
	void SetXSurface(double x) { xSurface = x; }
	void SetYSurface(double y) { ySurface = y; }
	void SetZSurface(double z) { zSurface = z; }
	double GetXSurface() const { return xSurface; }
	double GetYSurface() const { return ySurface; }
	double GetZSurface() const { return zSurface; }
	
private:
	int xFun, yFun, zFun; //Function type
	double _a, _b, _c; //functions' parameters 
	double xMin, xMax, yMin, yMax, zMin, zMax; //range of variability (??????idk how to translate it correctly)
	int xScale, yScale, zScale; //amount of sections on axes
	bool autoLen; //check if AutoLength is checked
	double arrowLen;
	double xRot, yRot, zRot; //rotation parameters
	bool surface; //check if AddSurface is checked
	double xSurface, ySurface, zSurface; //surface parameters
	GUIMyFrame1* MainWnd; //pointer to main Window
};
