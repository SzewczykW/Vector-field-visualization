#include "MatrixOperations.h"

Matrix::Matrix ( const int& rows, const int& cols )
    : _Rows ( rows ), _Cols ( cols )
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

double Matrix::get ( const int& row, const int& col ) const
{
    double result = 0.0;
    try
    {
        result = _Matrix.at ( row * _Cols + col );
    }
    catch ( const std::out_of_range& e )
    {
        // to disable warning about unused variable
        ( void ) e;
        throw std::out_of_range ( "Matrix::get: row or col out of range" );
    }
    return result;
}

void Matrix::set ( const int& row, const int& col, const double& value )
{
    try
    {
        _Matrix.at ( row * _Cols + col ) = value;
    }
    catch ( const std::out_of_range& e )
    {
        throw std::out_of_range ( "Matrix::set: row or col out of range" );
    }
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

Matrix Matrix::operator*( const double& scalar ) const
{
    Matrix result ( _Rows, _Cols );
    for ( int i = 0; i < _Rows * _Cols; ++i )
    {
        result._Matrix[i] = _Matrix[i] * scalar;
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

void Matrix::setZero ()
{
    for ( int i = 0; i < _Rows * _Cols; ++i )
    {
        _Matrix.emplace_back(0.0);
    }
}

Matrix Matrix::identity ( const int& size )
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
    _Vector.emplace_back ( 0.0 );
    _Vector.emplace_back ( 0.0 );
    _Vector.emplace_back ( 0.0 );
    _Vector.emplace_back ( 1.0 );
}

Vector4D::Vector4D ( const double& x, const double& y, const double& z )
{
    _Vector.emplace_back ( x );
    _Vector.emplace_back ( y );
    _Vector.emplace_back ( z );
    _Vector.emplace_back ( 1.0 );
}

Vector4D::Vector4D ( const Vector4D& other )
{
    _Vector.at ( 0 ) = other._Vector.at ( 0 );
    _Vector.at ( 1 ) = other._Vector.at ( 1 );
    _Vector.at ( 2 ) = other._Vector.at ( 2 );
    _Vector.at ( 3 ) = other._Vector.at ( 3 );
}

Vector4D& Vector4D::operator=( const Vector4D& other )
{
    _Vector.at ( 0 ) = other._Vector.at ( 0 );
    _Vector.at ( 1 ) = other._Vector.at ( 1 );
    _Vector.at ( 2 ) = other._Vector.at ( 2 );
    _Vector.at ( 3 ) = other._Vector.at ( 3 );
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
    result._Vector.at ( 0 ) = _Vector.at ( 0 ) * scalar;
    result._Vector.at ( 1 ) = _Vector.at ( 1 ) * scalar;
    result._Vector.at ( 2 ) = _Vector.at ( 2 ) * scalar;
    result._Vector.at ( 3 ) = _Vector.at ( 3 ) * scalar;
    return result;
}

Vector4D Vector4D::operator+(const Vector4D& other) const
{
    Vector4D result;
    
    result._Vector.at(0) = _Vector.at(0) + other._Vector.at(0);
    result._Vector.at(1) = _Vector.at(1) + other._Vector.at(1);
    result._Vector.at(2) = _Vector.at(2) + other._Vector.at(2);
    result._Vector.at(3) = _Vector.at(3) + other._Vector.at(3);
    
    return result;
}

Vector4D operator* ( const Matrix& mat, const Vector4D& vec )
{
    if ( mat.getCols () != 4 )
    {
        throw std::invalid_argument ( "Matrix::operator*: mat.getCols() != 4" );
    }
    Vector4D result;
    result.setX ( mat.get ( 0, 0 ) * vec.getX () + mat.get ( 0, 1 ) * vec.getY () + mat.get ( 0, 2 ) * vec.getZ () + mat.get ( 0, 3 ) * vec.getW () );
    result.setY ( mat.get ( 1, 0 ) * vec.getX () + mat.get ( 1, 1 ) * vec.getY () + mat.get ( 1, 2 ) * vec.getZ () + mat.get ( 1, 3 ) * vec.getW () );
    result.setZ ( mat.get ( 2, 0 ) * vec.getX () + mat.get ( 2, 1 ) * vec.getY () + mat.get ( 2, 2 ) * vec.getZ () + mat.get ( 2, 3 ) * vec.getW () );
    result.setW ( mat.get ( 3, 0 ) * vec.getX () + mat.get ( 3, 1 ) * vec.getY () + mat.get ( 3, 2 ) * vec.getZ () + mat.get ( 3, 3 ) * vec.getW () );
    return result;
}
