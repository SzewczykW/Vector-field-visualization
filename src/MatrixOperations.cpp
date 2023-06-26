#include "MatrixOperations.h"

Matrix::Matrix(int rows, int cols)
    : _Rows(rows), _Cols(cols), _Matrix(rows * cols)
{
    setZero();
}

Matrix::Matrix(const Matrix& other)
    : _Rows(other._Rows), _Cols(other._Cols), _Matrix(other._Matrix)
{
}

Matrix& Matrix::operator=(const Matrix& other)
{
    _Rows = other._Rows;
    _Cols = other._Cols;
    _Matrix = other._Matrix;
    return *this;
}

int Matrix::getRows() const
{
    return _Rows;
}

int Matrix::getCols() const
{
    return _Cols;
}

double Matrix::get(int row, int col) const
{
    return _Matrix[row * _Cols + col];
}

void Matrix::set(int row, int col, double value)
{
    _Matrix[row * _Cols + col] = value;
}

Matrix Matrix::operator+(const Matrix& other) const
{
    Matrix result(_Rows, _Cols);
    for (int i = 0; i < _Rows * _Cols; ++i)
    {
        result._Matrix[i] = _Matrix[i] + other._Matrix[i];
    }
    return result;
}

Matrix Matrix::operator-(const Matrix& other) const
{
    Matrix result(_Rows, _Cols);
    for (int i = 0; i < _Rows * _Cols; ++i)
    {
        result._Matrix[i] = _Matrix[i] - other._Matrix[i];
    }
    return result;
}

Matrix Matrix::operator*(const Matrix& other) const
{
    Matrix result(_Rows, other._Cols);
    for (int i = 0; i < _Rows; ++i)
    {
        for (int j = 0; j < other._Cols; ++j)
        {
            double sum = 0.0;
            for (int k = 0; k < _Cols; ++k)
            {
                sum += get(i, k) * other.get(k, j);
            }
            result.set(i, j, sum);
        }
    }
    return result;
}

Matrix Matrix::operator*(double scalar) const
{
    Matrix result(_Rows, _Cols);
    for (int i = 0; i < _Rows * _Cols; ++i)
    {
        result._Matrix[i] = _Matrix[i] * scalar;
    }
    return result;
}

Matrix Matrix::operator/(double scalar) const
{
    Matrix result(_Rows, _Cols);
    for (int i = 0; i < _Rows * _Cols; ++i)
    {
        result._Matrix[i] = _Matrix[i] / scalar;
    }
    return result;
}

Matrix Matrix::transpose() const
{
    Matrix result(_Cols, _Rows);
    for (int i = 0; i < _Rows; ++i)
    {
        for (int j = 0; j < _Cols; ++j)
        {
            result.set(j, i, get(i, j));
        }
    }
    return result;
}

void Matrix::setZero()
{
    for (int i = 0; i < _Rows * _Cols; ++i)
    {
        _Matrix[i] = 0.0;
    }
}

Matrix Matrix::identity(int size)
{
    Matrix result(size, size);
    for (int i = 0; i < size; ++i)
    {
        result.set(i, i, 1.0);
    }
    return result;
}