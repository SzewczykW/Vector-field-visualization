#pragma once

#include <vector>
#include <stdexcept>

/**
 * @brief Class for 4D vectors with basic operations
 * on them
 */
class Vector4D {
    public:

    /**
     * @brief Construct a new Vector4D object
     *
     */
    Vector4D ();

    /**
     * @brief Construct a new Vector 4 D object
     *
     * @param x
     * @param y
     * @param z
     */
    Vector4D ( const double& x, const double& y, const double& z );

    /**
     * @brief Construct a new Vector 4 D object
     *
     * @param other
     */
    Vector4D ( const Vector4D& other );

    /**
     * @brief Copy assignment operator
     *
     * @param other
     * @return Vector4D&
     */
    Vector4D& operator=( const Vector4D& other );

    /**
     * @brief Destroy the Vector 4 D object
     *
     */
    ~Vector4D () = default;


    /**
     * @brief Getters and setters for vector components
     *
     * @return double
     * @param x, y, z, w
     */
    double getX () const;
    double getY () const;
    double getZ () const;
    double getW () const;
    void setX ( const double& x );
    void setY ( const double& y );
    void setZ ( const double& z );
    void setW ( const double& w );

    /**
     * @brief Multiplication of vector by scalar
     *
     * @param scalar
     * @return Vector4D
     */
    Vector4D operator*( const double& scalar ) const;

    /**
     * @brief Addition of two vectors
     *
     * @param other
     * @return Vector4D
     */
    Vector4D operator+( const Vector4D& other ) const;
    private:

    /**
     * @brief Vector components
     *
     */
    std::vector<double> _Vector;
};

/**
 * @brief Class for matrices with basic operations
 *
 */
class Matrix {
    public:

    /**
     * @brief Construct a new Matrix object
     *
     * @param rows, cols
     */
    Matrix ( const int& rows, const int& cols );

    /**
     * @brief Construct a new Matrix object
     *
     * @param other
     */
    Matrix ( const Matrix& other );

    /**
     * @brief Copy assignment operator
     *
     * @param other
     * @return Matrix&
     */
    Matrix& operator=( const Matrix& other );

    /**
     * @brief Destroy the Matrix object
     *
     */
    ~Matrix () = default;

    /**
     * @brief Getters for the number of rows and columns
     *
     * @return int
     */
    int getRows () const;
    int getCols () const;

    /**
     * @brief Setters and getters for matrix elements
     *
     * @param row
     * @param col
     * @return double
     */
    double get ( const int& row, const int& col ) const;
    void set ( const int& row, const int& col, const double& value );

    /**
     * @brief Basic operations on matrices
     *
     * @param other, scalar
     * @return Matrix
     */
    Matrix operator+( const Matrix& other ) const;
    Matrix operator-( const Matrix& other ) const;
    Matrix operator*( const Matrix& other ) const;
    Matrix operator*( const double& scalar ) const;
    Matrix transpose () const;

    /**
     * @brief Set all elements of matrix to 0
     *
     */
    void setZero ();

    /**
     * @brief Set all elements of matrix to 1
     *
     */
    static Matrix identity ( const int& size );

    /**
     * @brief Multiplication of matrix by vector
     *
     * @param row
     * @param col
     * @return Vector4D
     */
    friend Vector4D operator* ( const Matrix& mat, const Vector4D& vec );
    private:
    int _Rows;
    int _Cols;
    /**
     * @brief Matrix elements
     *
     */
    std::vector<double> _Matrix;
};