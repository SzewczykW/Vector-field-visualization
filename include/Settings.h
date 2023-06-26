#pragma once

#include <cmath>
#include "MatrixOperations.h"

enum funType {
	A, AX, AX2, AX3, LOG_AX, EXP_AX, SIN_AX, COS_AX
};

class Settings {
	public:
	Settings ();

	void SetXFun ( const funType& fun );
	void SetYFun ( const funType& fun );
	void SetZFun ( const funType& fun );
	funType GetXFun () const;
	funType GetYFun () const;
	funType GetZFun () const;

	void SetA ( const double& a );
	void SetB ( const double& b );
	void SetC ( const double& c );
	double GetA () const;
	double GetB () const;
	double GetC () const;

	void SetXMin ( const double& x );
	void SetXMax ( const double& x );
	void SetYMin ( const double& y );
	void SetYMax ( const double& y );
	void SetZMin ( const double& z );
	void SetZMax ( const double& z );
	double GetXMin () const;
	double GetXMax () const;
	double GetYMin () const;
	double GetYMax () const;
	double GetZmin () const;
	double GetZMax () const;

	void SetXScale ( const int& x );
	void SetYScale ( const int& y );
	void SetZScale ( const int& z );
	int GetXScale () const;
	int GetYScale () const;
	int GetZScale () const;
	void SetAutoScale ( const bool& a );
	bool isAutoScaled () const;
	Matrix GetScaleMatrix () const;

	void SetXRot ( const double& x );
	void SetYRot ( const double& y );
	void SetZRot ( const double& z );
	double GetXRot () const;
	double GetYRot () const;
	double GetZRot () const;
	Matrix GetXRotMatrix () const;
	Matrix GetYRotMatrix () const;
	Matrix GetZRotMatrix () const;


	void setSurface ( const bool& b );
	bool isAdditionalSurface () const;
	void SetXSurface ( const double& x );
	void SetYSurface ( const double& y );
	void SetZSurface ( const double& z );
	double GetXSurface () const;
	double GetYSurface () const;
	double GetZSurface () const;

	Matrix GetTranslationMatrix (const double& x, const double& y, const double& z) const;

	private:
	/**
	 * @brief Function type
	 *
	 */
	funType _xFun, _yFun, _zFun;
	/**
	 * @brief Functions' parameters
	 *
	 */
	double _a, _b, _c;
	/**
	 * @brief Range of axes
	 *
	 */
	double _xMin, _xMax, _yMin, _yMax, _zMin, _zMax;
	/**
	 * @brief Scale
	 *
	 */
	int _xScale, _yScale, _zScale;
	/**
	 * @brief Auto arrow length
	 *
	 */
	bool _isAutoScaled;
	/**
	 * @brief Arrow length
	 *
	 */
	double _arrowLen;
	/**
	 * @brief Rotation parameters
	 *
	 */
	double _xRot, _yRot, _zRot;
	/**
	 * @brief Surface parameters
	 *
	 */
	bool _additionalSurface;
	/**
	 * @brief Additional urface coordinates
	 *
	 */
	double _xSurface, _ySurface, _zSurface;
};

