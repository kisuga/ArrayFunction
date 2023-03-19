#include"Shift.h"
#include"Constants.h"
#include"stdafx.h"

void shiftRight(const int MyNumber, int arrayy[])
{
	int buffer = arrayy[MyNumber - 1];
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
void shiftRight(const int MyNumber, double arrayy[])
{
	double buffer = arrayy[MyNumber - 1];
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
void shiftRight(const int MyNumber, char arrayy[])
{
	char buffer = arrayy[MyNumber - 1];
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
void shiftRight(int arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	int buffer = arrayy[ROWS - 1][COLS - 1];
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
void shiftRight(double arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	double buffer = arrayy[ROWS - 1][COLS - 1];
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
void shiftRight(char arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	char buffer = arrayy[ROWS - 1][COLS - 1];
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

void shiftLeft(const int MyNumber, int arrayy[])
{
	int buffer = arrayy[0];
	for (int i = 0; i < MyNumber; i++)
	{
		arrayy[i] = arrayy[i + 1];
	}
	arrayy[MyNumber - 1] = buffer;
}
void shiftLeft(const int MyNumber, double arrayy[])
{
	double buffer = arrayy[0];
	for (int i = 0; i < MyNumber; i++)
	{
		arrayy[i] = arrayy[i + 1];
	}
	arrayy[MyNumber - 1] = buffer;
}
void shiftLeft(const int MyNumber, char arrayy[])
{
	char buffer = arrayy[0];
	for (int i = 0; i < MyNumber; i++)
	{
		arrayy[i] = arrayy[i + 1];
	}
	arrayy[MyNumber - 1] = buffer;
}
void shiftLeft(int arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	int buffer = arrayy[0][0];
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
void shiftLeft(double arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	double buffer = arrayy[0][0];
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
void shiftLeft(char arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	char buffer = arrayy[0][0];
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