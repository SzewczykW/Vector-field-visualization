#pragma once

#include <cmath>
#include "MatrixOperations.h"

/**
 * @brief Enum for function types
 *
 */
enum funType {
	A, AX, AX2, AX3, LOG_AX, EXP_AX, SIN_AX, COS_AX
};

/**
 * @brief Class for settings of the coordinate system
 * and the vector field with basic features
 */
class Settings {
	public:
	/**
	 * @brief Construct a new Settings object
	 *
	 */
	Settings ();

	/**
	 * @brief Setters and getters for function types
	 * for x, y and z
	 * @param fun
	 * @return funType
	 */
	void SetXFun ( const funType& fun );
	void SetYFun ( const funType& fun );
	void SetZFun ( const funType& fun );
	funType GetXFun () const;
	funType GetYFun () const;
	funType GetZFun () const;

	/**
	 * @brief Setters and getters for function parameters
	 * for x, y and z
	 * @param a, b, c
	 * @return double
	 */
	void SetA ( const double& a );
	void SetB ( const double& b );
	void SetC ( const double& c );
	double GetA () const;
	double GetB () const;
	double GetC () const;

	/**
	 * @brief Setter and getter for range of axes
	 * for x, y and z
	 * @param x, y, z
	 * @return double
	 */
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
	double GetZMin () const;
	double GetZMax () const;

	/**
	 * @brief Setters and getters for scale of arrows
	 * for x, y and z. Getters for scale matrix for arrows
	 * and for scale matrix for coordinate system
	 * @param x, y, z, autoScale, len, sx, sy, sz
	 * @return int, bool, double, Matrix
	 */
	void SetXScale ( const int& x );
	void SetYScale ( const int& y );
	void SetZScale ( const int& z );
	int GetXScale () const;
	int GetYScale () const;
	int GetZScale () const;
	void SetAutoScale ( const bool& autoScale );
	bool isAutoScaled () const;
	void SetArrowLength ( const double& len );
	double GetArrowLength () const;
	Matrix GetArrowScaleMatrix () const;
	Matrix GetScaleMatrix ( const double& sx, const double& sy, const double& sz ) const;

	/**
	 * @brief Setters and getters for rotation
	 * for x, y and z. Getters for rotation matrices
	 * @param x, y, z
	 * @return double, Matrix
	 */
	void SetXRot ( const double& x );
	void SetYRot ( const double& y );
	void SetZRot ( const double& z );
	double GetXRot () const;
	double GetYRot () const;
	double GetZRot () const;
	Matrix GetXRotMatrix () const;
	Matrix GetYRotMatrix () const;
	Matrix GetZRotMatrix () const;

	/**
	 * @brief Setters and getters for additional surface
	 * for x, y and z.
	 *
	 * @param additionalSurface, x, y, z
	 * @return double
	 */
	void SetSurface ( const bool& additionalSurface );
	bool IsAdditionalSurface () const;
	void SetXSurface ( const double& x );
	void SetYSurface ( const double& y );
	void SetZSurface ( const double& z );
	double GetXSurface () const;
	double GetYSurface () const;
	double GetZSurface () const;

	/**
	 * @brief Calculate function value, it's maximum and norm.
	 *
	 * @param type, x, x, y, z
	 * @return double
	 */
	double Calc ( const int& type, const double& x ) const;
	double GetMax () const;
	double norm ( const double& x, const double& y, const double& z ) const;

	/**
	 * @brief Get translation matrix
	 *
	 *
	 * @param x, y, z
	 * @return Matrix
	 */
	Matrix GetTranslationMatrix ( const double& x, const double& y, const double& z ) const;

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
	 * @brief Auto arrow length. If true, arrow length is calculated automatically and
	 * value of function is defined as maximum of absolute values of all coordinates and
	 * described by colour (red - maximum, blue - minimum).
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
	 * @brief Additional surface coordinates
	 *
	 */
	double _xSurface, _ySurface, _zSurface;
};

