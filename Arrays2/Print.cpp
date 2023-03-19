#include"Print.h"
#include"stdafx.h"
#include"Constants.h"


void Print(const int MyNumber, int arrayy[])
{
	for (int i = 0; i < MyNumber; i++)
	{
		cout << arrayy[i] << "\t";
	}
	cout << endl;
}
void Print(const int MyNumber, double arrayy[])
{
	for (int i = 0; i < MyNumber; i++)
	{
		cout << arrayy[i] << "\t";
	}
	cout << endl;
}
void Print(const int MyNumber, char arrayy[])
{
	for (int i = 0; i < MyNumber; i++)
	{
		cout << arrayy[i] << "\t";
	}
	cout << endl;
}

void Print(int arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arrayy[i][j] << "\t";
		}
		cout << endl;
	}

}
void Print(double arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arrayy[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(char arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arrayy[i][j] << "\t";
		}
		cout << endl;
	}
}