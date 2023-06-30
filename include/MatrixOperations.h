#pragma once

#include <vector>
#include <stdexcept>

class Vector4D {
    public:
    Vector4D ();
    Vector4D ( const double& x, const double& y, const double& z );
    Vector4D ( const Vector4D& other );
    Vector4D& operator=( const Vector4D& other );
    ~Vector4D () = default;

    double getX () const;
    double getY () const;
    double getZ () const;
    double getW () const;

    void setX ( const double& x );
    void setY ( const double& y );
    void setZ ( const double& z );
    void setW ( const double& w );

    Vector4D operator*( const double& scalar ) const;
    Vector4D operator+( const Vector4D& other) const;
    private:
    std::vector<double> _Vector;
};

class Matrix {
    public:
    Matrix(const int& rows, const int& cols);
    Matrix ( const Matrix& other );
    Matrix& operator=( const Matrix& other );
    ~Matrix () = default;

    int getRows () const;
    int getCols () const;
    double get ( const int& row, const int& col ) const;
    void set (const int& row, const int& col, const double& value );

    Matrix operator+( const Matrix& other ) const;
    Matrix operator-( const Matrix& other ) const;
    Matrix operator*( const Matrix& other ) const;
    Matrix operator*( const double& scalar ) const;

    Matrix transpose () const;

    void setZero ();

    static Matrix identity ( const int& size );

    friend Vector4D operator* ( const Matrix& mat, const Vector4D& vec );
    private:
    int _Rows;
    int _Cols;
    std::vector<double> _Matrix;
};