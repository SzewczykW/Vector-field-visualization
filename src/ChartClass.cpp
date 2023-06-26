#include "ChartClass.h"

Settings::Settings ()
{
	_xFun = _yFun = _zFun = funType::A;
	_a = _b = _c = 1.0;
	_xMin = _yMin = _zMin = -5.0;
	_xMax = _yMax = _zMax = 5.0;
	_xScale = _yScale = _zScale = 10;
	_arrowLen = 1.0;
	_isAutoScaled = true;
	_xRot = _yRot = _zRot = 0.0;
	_additionalSurface = false;
	_xSurface = _ySurface = _zSurface = 0.0;
}

void Settings::SetXFun ( const funType& fun )
{
	_xFun = fun;
}
void Settings::SetYFun ( const funType& fun )
{
	_yFun = fun;
}
void Settings::SetZFun ( const funType& fun )
{
	_zFun = fun;
}
funType Settings::GetXFun () const
{
	return _xFun;
}
funType Settings::GetYFun () const
{
	return _yFun;
}
funType Settings::GetZFun () const
{
	return _zFun;
}

void Settings::SetA ( const double& a )
{
	_a = a;
}
void Settings::SetB ( const double& b )
{
	_b = b;
}
void Settings::SetC ( const double& c )
{
	_c = c;
}
double Settings::GetA () const
{
	return _a;
}
double Settings::GetB () const
{
	return _b;
}
double Settings::GetC () const
{
	return _c;
}

void Settings::SetXMin ( const double& x )
{
	_xMin = x;
}
void Settings::SetXMax ( const double& x )
{
	_xMax = x;
}
void Settings::SetYMin ( const double& y )
{
	_yMin = y;
}
void Settings::SetYMax ( const double& y )
{
	_yMax = y;
}
void Settings::SetZMin ( const double& z )
{
	_zMin = z;
}
void Settings::SetZMax ( const double& z )
{
	_zMax = z;
}
double Settings::GetXMin () const
{
	return _xMin;
}
double Settings::GetXMax () const
{
	return _xMax;
}
double Settings::GetYMin () const
{
	return _yMin;
}
double Settings::GetYMax () const
{
	return _yMax;
}
double Settings::GetZmin () const
{
	return _zMin;
}
double Settings::GetZMax () const
{
	return _zMax;
}

void Settings::SetXScale ( const int& x )
{
	_xScale = x;
}
void Settings::SetYScale ( const int& y )
{
	_yScale = y;
}
void Settings::SetZScale ( const int& z )
{
	_zScale = z;
}
int Settings::GetXScale () const
{
	return _xScale;
}
int Settings::GetYScale () const
{
	return _yScale;
}
int Settings::GetZScale () const
{
	return _zScale;
}
void Settings::SetAutoScale ( const bool& a )
{
	_isAutoScaled = a;
}
bool Settings::isAutoScaled () const
{
	return _isAutoScaled;
}

void Settings::SetXRot ( const double& x )
{
	_xRot = x;
}
void Settings::SetYRot ( const double& y )
{
	_yRot = y;
}
void Settings::SetZRot ( const double& z )
{
	_zRot = z;
}
double Settings::GetXRot () const
{
	return _xRot;
}
double Settings::GetYRot () const
{
	return _yRot;
}
double Settings::GetZRot () const
{
	return _zRot;
}

void Settings::setSurface ( const bool& b )
{
	_additionalSurface = b;
}
bool Settings::isAdditionalSurface () const
{
	return _additionalSurface;
}
void Settings::SetXSurface ( const double& x )
{
	_xSurface = x;
}
void Settings::SetYSurface ( const double& y )
{
	_ySurface = y;
}
void Settings::SetZSurface ( const double& z )
{
	_zSurface = z;
}
double Settings::GetXSurface () const
{
	return _xSurface;
}
double Settings::GetYSurface () const
{
	return _ySurface;
}
double Settings::GetZSurface () const
{
	return _zSurface;
}