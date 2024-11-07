#pragma once
#include <iostream>
using namespace std;

template <typename T = int, size_t row = 2, size_t col = 3>
class Matrix
{
public:
	Matrix() = default;
	Matrix(const T& value);
	void print() const;
	bool operator==(const Matrix<T, row, col>& other) const;
	bool operator!=(const Matrix<T, row, col>& other) const;

	Matrix<T, row, col> operator + (const T& value);
	T& operator()(size_t r, size_t c);

	template <typename T, size_t row, size_t col>
	friend ostream& operator<<(ostream& out, const Matrix<T, row, col>& m);
	template <typename T, size_t row, size_t col>
	friend istream& operator>>(istream& in, Matrix<T, row, col>& m);


private:
	T matrix[row][col]{};
};

template<typename T, size_t row, size_t col>
inline Matrix<T, row, col>::Matrix(const T& value)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			matrix[i][j] = value;
		}
	}
}

template<typename T, size_t row, size_t col>
inline void Matrix<T, row, col>::print() const
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T, size_t row, size_t col>
inline bool Matrix<T, row, col>::operator==(const Matrix<T, row, col>& other) const
{
	
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			if (matrix[i][j] != other.matrix[i][j])
				return false;
		}
		
	}
	return true;
}

template<typename T, size_t row, size_t col>
inline bool Matrix<T, row, col>::operator!=(const Matrix<T, row, col>& other) const
{
	{
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				if (matrix[i][j] != other.matrix[i][j])
					return true;
			}

		}
		return false;
	}
}


template<typename T, size_t row, size_t col>
inline Matrix<T, row, col> Matrix<T, row, col>::operator+(const T& value)
{
	Matrix<T, row, col> result(*this);
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			result.matrix[i][j] += value;
		}
	}
	return result;
}

template<typename T, size_t row, size_t col>
inline T& Matrix<T, row, col>::operator()(size_t r, size_t c)
{
	static T errValue;
	if (r >= row || c >= col)
		return errValue;
	return matrix[r][c];
}

template<typename T, size_t row, size_t col>
inline ostream& operator<<(ostream& out, const Matrix<T, row, col>& m)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			out << m.matrix[i][j] << "\t";
		}
		out << "\n";
	}
	out << "\n";
	return out;
}

template<typename T, size_t row, size_t col>
inline istream& operator>>(istream& in, Matrix<T, row, col>& m)
{
	for (size_t i = 0; i < row; i++) {
		for (size_t j = 0; j < col; j++) {
			in >> m.matrix[i][j];
		}
	}
	return in;
}

