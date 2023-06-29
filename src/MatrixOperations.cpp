#include "MatrixOperations.h"

Matrix::Matrix ( int rows, int cols )
    : _Rows ( rows ), _Cols ( cols ), _Matrix ( rows* cols )
{
    setZero ();
}

Matrix::Matrix ( const Matrix& other )
    : _Rows ( other._Rows ), _Cols ( other._Cols ), _Matrix ( other._Matrix )
{}

Matrix& Matrix::operator=( const Matrix& other )
{
    _Rows = other._Rows;
    _Cols = other._Cols;
    _Matrix = other._Matrix;
    return *this;
}

int Matrix::getRows () const
{
    return _Rows;
}

int Matrix::getCols () const
{
    return _Cols;
}

double Matrix::get ( int row, int col ) const
{
    return _Matrix[row * _Cols + col];
}

void Matrix::set ( int row, int col, double value )
{
    _Matrix[row * _Cols + col] = value;
}

Matrix Matrix::operator+( const Matrix& other ) const
{
    Matrix result ( _Rows, _Cols );
    for ( int i = 0; i < _Rows * _Cols; ++i )
    {
        result._Matrix[i] = _Matrix[i] + other._Matrix[i];
    }
    return result;
}

Matrix Matrix::operator-( const Matrix& other ) const
{
    Matrix result ( _Rows, _Cols );
    for ( int i = 0; i < _Rows * _Cols; ++i )
    {
        result._Matrix[i] = _Matrix[i] - other._Matrix[i];
    }
    return result;
}

Matrix Matrix::operator*( const Matrix& other ) const
{
    Matrix result ( _Rows, other._Cols );
    for ( int i = 0; i < _Rows; ++i )
    {
        for ( int j = 0; j < other._Cols; ++j )
        {
            double sum = 0.0;
            for ( int k = 0; k < _Cols; ++k )
            {
                sum += get ( i, k ) * other.get ( k, j );
            }
            result.set ( i, j, sum );
        }
    }
    return result;
}

Matrix Matrix::operator*( double scalar ) const
{
    Matrix result ( _Rows, _Cols );
    for ( int i = 0; i < _Rows * _Cols; ++i )
    {
        result._Matrix[i] = _Matrix[i] * scalar;
    }
    return result;
}

Matrix Matrix::operator/( double scalar ) const
{
    Matrix result ( _Rows, _Cols );
    for ( int i = 0; i < _Rows * _Cols; ++i )
    {
        result._Matrix[i] = _Matrix[i] / scalar;
    }
    return result;
}

Matrix Matrix::transpose () const
{
    Matrix result ( _Cols, _Rows );
    for ( int i = 0; i < _Rows; ++i )
    {
        for ( int j = 0; j < _Cols; ++j )
        {
            result.set ( j, i, get ( i, j ) );
        }
    }
    return result;
}

Matrix Matrix::translate(const double& x, const double& y, const double& z) const 
{ 
    Matrix translation(4, 4);
    
    translation.set(0, 0, 1.0);
    translation.set(1, 1, 1.0);
    translation.set(2, 2, 1.0);
    translation.set(3, 3, 1.0);
    
    translation.set(0, 3, x);
    translation.set(1, 3, y);
    translation.set(2, 3, z);

    return translation;
}

Matrix Matrix::scale(const double& x, const double& y, const double& z) const 
{
    Matrix scaling(4, 4);

    scaling.set(0, 0, x);
    scaling.set(1, 1, y);
    scaling.set(2, 2, z);
    scaling.set(3, 3, 1.0);

    return scaling;
}

Matrix Matrix::rotateX(double rotation) const
{
    rotation = (rotation * 3.14159) / 180.0;
    Matrix rot(4, 4);
 
    rot.set(0, 0, 1.0);
    rot.set(1, 1, cos(rotation));
    rot.set(2, 2, cos(rotation));
    rot.set(1, 2, -sin(rotation));
    rot.set(2, 1, sin(rotation));
    rot.set(3, 3, 1.0);

    return rot;
}

Matrix Matrix::rotateY(double rotation) const
{
    rotation = (rotation * 3.14159) / 180.0;
    Matrix rot(4, 4);

    rot.set(0, 0, cos(rotation));
    rot.set(1, 1, 1.0);
    rot.set(2, 2, cos(rotation));
    rot.set(2, 0, -sin(rotation));
    rot.set(0, 2, sin(rotation));
    rot.set(3, 3, 1.0);

    return rot;
}

Matrix Matrix::rotateZ(double rotation) const
{
    rotation = (rotation * 3.14159) / 180.0;
    Matrix rot(4, 4);

    rot.set(0, 0, cos(rotation));
    rot.set(1, 1, cos(rotation));
    rot.set(2, 2, 1.0);
    rot.set(0, 1, -sin(rotation));
    rot.set(1, 0, sin(rotation));
    rot.set(3, 3, 1.0);

    return rot;
}

void Matrix::setZero ()
{
    for ( int i = 0; i < _Rows * _Cols; ++i )
    {
        _Matrix[i] = 0.0;
    }
}

Matrix Matrix::identity ( int size )
{
    Matrix result ( size, size );
    for ( int i = 0; i < size; ++i )
    {
        result.set ( i, i, 1.0 );
    }
    return result;
}

Vector4D::Vector4D ()
{
    _Vector.emplace_back(0.0);
    _Vector.emplace_back(0.0);
    _Vector.emplace_back(0.0);
    _Vector.emplace_back(1.0);
}

Vector4D::Vector4D ( const double& x, const double& y, const double& z )
{
    _Vector.emplace_back(x);
    _Vector.emplace_back(y);
    _Vector.emplace_back(z);
    _Vector.emplace_back(1.0);
}

Vector4D::Vector4D ( const Vector4D& other )
{
    _Vector.reserve ( 4 );
    setX ( other.getX () );
    setY ( other.getY () );
    setZ ( other.getZ () );
    _Vector[3] = 1.0;
}

Vector4D& Vector4D::operator=(const Vector4D& other)
{
    _Vector.reserve(4);
    setX ( other.getX () );
	setY ( other.getY () );
	setZ ( other.getZ () );
	_Vector[3] = 1.0;
	return *this;
}

double Vector4D::getX () const
{
    return _Vector[0];
}

double Vector4D::getY () const
{
    return _Vector[1];
}

double Vector4D::getZ () const
{
    return _Vector[2];
}

double Vector4D::getW () const
{
    return _Vector[3];
}

void Vector4D::setX ( const double& x )
{
    _Vector[0] = x;
}

void Vector4D::setY ( const double& y )
{
    _Vector[1] = y;
}

void Vector4D::setZ ( const double& z )
{
    _Vector[2] = z;
}

void Vector4D::setW ( const double& w )
{
    _Vector[3] = w;
}

Vector4D Vector4D::operator*( const double& scalar ) const
{
    Vector4D result;
    result.setX ( getX () * scalar );
    result.setY ( getY () * scalar );
    result.setZ ( getZ () * scalar );
    return result;
}

Vector4D Vector4D::operator/( const double& scalar ) const
{
    Vector4D result;
    result.setX ( getX () / scalar );
    result.setY ( getY () / scalar );
    result.setZ ( getZ () / scalar );
    return result;
}

Vector4D operator* ( const Matrix& mat, const Vector4D& vec )
{
    Vector4D result;
    result.setX ( mat.get ( 0, 0 ) * vec.getX () + mat.get ( 0, 1 ) * vec.getY () + mat.get ( 0, 2 ) * vec.getZ () + mat.get ( 0, 3 ) * vec.getW () );
    result.setY ( mat.get ( 1, 0 ) * vec.getX () + mat.get ( 1, 1 ) * vec.getY () + mat.get ( 1, 2 ) * vec.getZ () + mat.get ( 1, 3 ) * vec.getW () );
    result.setZ ( mat.get ( 2, 0 ) * vec.getX () + mat.get ( 2, 1 ) * vec.getY () + mat.get ( 2, 2 ) * vec.getZ () + mat.get ( 2, 3 ) * vec.getW () );
    result.setW ( mat.get ( 3, 0 ) * vec.getX () + mat.get ( 3, 1 ) * vec.getY () + mat.get ( 3, 2 ) * vec.getZ () + mat.get ( 3, 3 ) * vec.getW () );
    return result;
}
