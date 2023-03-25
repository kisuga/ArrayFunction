#include"Shift.h"

template<typename T>
void shiftRight(const int MyNumber, T arrayy[])
{
	T buffer = arrayy[MyNumber - 1];
	for (int i = MyNumber - 1; i > 0; i++)
	{
		arrayy[i] = arrayy[i - 1];
	}
	arrayy[0] = buffer;

	for (int i = 0; i < MyNumber; i++)
	{
		cout << arrayy[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void shiftRight(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	T buffer = arrayy[ROWS - 1][COLS - 1];
	for (int i = ROWS - 1; i > 0; i++)
	{
		for (int j = COLS - 1; j > 0; j++)
		{
			arrayy[i][j] = arrayy[i - 1][j - 1];
		}
	}
	arrayy[0][0] = buffer;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arrayy[i][j] << "\t";
		}
	}
	cout << endl;
}

template<typename T>
void shiftLeft(const int MyNumber, T arrayy[])
{
	T buffer = arrayy[0];
	for (int i = 0; i < MyNumber; i++)
	{
		arrayy[i] = arrayy[i + 1];
	}
	arrayy[MyNumber - 1] = buffer;
}
template<typename T>
void shiftLeft(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	T buffer = arrayy[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arrayy[i][j] = arrayy[i + 1][j + 1];
		}
	}
	arrayy[ROWS - 1][COLS - 1] = buffer;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arrayy[i][j] << "\t";
		}
		cout << endl;
	}
}

