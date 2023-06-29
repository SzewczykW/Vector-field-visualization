#include "Settings.h"

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
double Settings::GetZMin () const
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
void Settings::SetArrowLength ( const double& len ) {
	_arrowLen = len;
}
double Settings::GetArrowLength() const {
	return _arrowLen;
}
void Settings::SetAutoScale ( const bool& autoScale )
{
	_isAutoScaled = autoScale;
}
bool Settings::isAutoScaled () const
{
	return _isAutoScaled;
}
Matrix Settings::GetScaleMatrix () const
{
	Matrix scale ( 4, 4 );
	scale.set ( 0, 0, _xScale );
	scale.set ( 1, 1, _yScale );
	scale.set ( 2, 2, _zScale );
	scale.set ( 3, 3, 1.0 );
	return scale;
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
Matrix Settings::GetXRotMatrix () const
{
	Matrix xRot ( 4, 4 );
	double rot = (_xRot * 3.14159) / 180.0;
	xRot.set ( 0, 0, 1.0 );
	xRot.set ( 1, 1, cos ( rot ) );
	xRot.set ( 1, 2, -sin ( rot ) );
	xRot.set ( 2, 1, sin ( rot ) );
	xRot.set ( 2, 2, cos ( rot ) );
	xRot.set ( 3, 3, 1.0 );
	return xRot;
}
Matrix Settings::GetYRotMatrix () const
{
	Matrix yRot ( 4, 4 );
	double rot = (_yRot * 3.14159) / 180.0;
	yRot.set ( 0, 0, cos ( rot ) );
	yRot.set ( 0, 2, sin ( rot ) );
	yRot.set ( 1, 1, 1.0 );
	yRot.set ( 2, 0, -sin ( rot ) );
	yRot.set ( 2, 2, cos ( rot ) );
	yRot.set ( 3, 3, 1.0 );
	return yRot;
}
Matrix Settings::GetZRotMatrix () const
{
	Matrix zRot ( 4, 4 );
	double rot = (_zRot * 3.14159) / 180.0;
	zRot.set ( 0, 0, cos ( rot ) );
	zRot.set ( 0, 1, -sin ( rot ) );
	zRot.set ( 1, 0, sin ( rot ) );
	zRot.set ( 1, 1, cos ( rot ) );
	zRot.set ( 2, 2, 1.0 );
	zRot.set ( 3, 3, 1.0 );
	return zRot;
}


void Settings::setSurface ( const bool& additionalSurface )
{
	_additionalSurface = additionalSurface;
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

double Settings::Calc(const int type, const double x) const 
{
	double param;
	funType fun;
	if (type == 0)
	{
		param = _a;
		fun = GetXFun();
	}
	else if (type == 1)
	{
		param = _b;
		fun = GetYFun();
	}
	else if (type == 2)
	{
		param = _c;
		fun = GetZFun();
	}
	else return 0;
	switch (fun)
	{
		case A:
			return param;
		case AX:
			return param * x;
		case AX2:
			return param * pow(x, 2);
		case AX3:
			return param * pow(x, 3);
		case LOG_AX:
			if((param *x)>0)
				return log(param * x);
			return 0;
		case EXP_AX:
			return exp(param * x);
		case SIN_AX:
			return sin(param * x);
		case COS_AX:
			return cos(param * x);
		default:
			return 0;
	}
}


Matrix Settings::GetTranslationMatrix ( const double& x, const double& y, const double& z ) const
{
	Matrix translation ( 4, 4 );
	translation.set ( 0, 0, 1.0 );
	translation.set ( 1, 1, 1.0 );
	translation.set ( 2, 2, 1.0 );
	translation.set ( 3, 3, 1.0 );
	translation.set ( 0, 3, x );
	translation.set ( 1, 3, y );
	translation.set ( 2, 3, z );
	return translation;
}