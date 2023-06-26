#pragma once

#include <vector>

class Matrix 
{
    public:
        Matrix ( int rows, int cols );
        Matrix ( const Matrix& other );
        Matrix& operator=( const Matrix& other );
        ~Matrix () = default;

        int getRows () const;
        int getCols () const;
        double get ( int row, int col ) const;
        void set ( int row, int col, double value );

        Matrix operator+( const Matrix& other ) const;
        Matrix operator-( const Matrix& other ) const;
        Matrix operator*( const Matrix& other ) const;
        Matrix operator*( double scalar ) const;
        Matrix operator/( double scalar ) const;

        Matrix transpose () const;

        void setZero ();

        static Matrix identity ( int size );
    private:
        int _Rows;
        int _Cols;
        std::vector<double> _Matrix;
};