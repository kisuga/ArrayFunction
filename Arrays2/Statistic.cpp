#include "Statistic.h"
#include"Constants.h"
#include"stdafx.h"

int Sum(const int MyNumber, int arrayy[])
{
	int summa = 0;
	for (int i = 0; i < MyNumber; i++)
	{
		summa += arrayy[i];
	}
	return summa;
}
double Sum(const int MyNumber, double arrayy[])
{
	double summa = 0;
	for (int i = 0; i < MyNumber; i++)
	{
		summa += arrayy[i];
	}
	return summa;
}
double Sum(const int MyNumber, char arrayy[])
{
	char summa = 0;
	for (int i = 0; i < MyNumber; i++)
	{
		summa += arrayy[i];
	}
	return summa;
}

int Sum(int arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	int summa = 0;
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				summa += arrayy[i][j];
			}
		}
	}
	return summa;
}
double Sum(double arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	double summa = 0;
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				summa += arrayy[i][j];
			}
		}
	}
	return summa;
}
double Sum(char arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	char summa = 0;
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				summa += arrayy[i][j];
			}
		}
	}
	return summa;
}


//double Avg(const int MyNumber, int arrayy[]) //- решение Олега Анатольевича
//{
	//return (double)Sum(MyNumber, arrayy) / MyNumber;
//}
//double Avg(const int MyNumber, double arrayy[]) //- решение Олега Анатольевича
//{
	//return Sum(MyNumber, arrayy) / MyNumber; //- при перегрузке этой функции убрали 
//неявное преобразование переменной
//}


double Avg(const int MyNumber, int arrayy[])
{
	int summa = 0;
	for (int i = 0; i < MyNumber; i++)
	{
		summa += arrayy[i];
	}
	int middlsumma = summa / MyNumber;
	return middlsumma;
}
double  Avg(const int MyNumber, double arrayy[])
{
	double summa = 0;
	for (int i = 0; i < MyNumber; i++)
	{
		summa += arrayy[i];
	}
	double middlsumma = summa / MyNumber;
	return middlsumma;
}
double Avg(const int MyNumber, char arrayy[])
{
	char summa = 0;
	for (int i = 0; i < MyNumber; i++)
	{
		summa += arrayy[i];
	}
	char middlsumma = summa / MyNumber;
	return middlsumma;
}
int Avg(int arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	int summa = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summa += arrayy[i][j];
		}
	}
	int middlsumma = summa / (ROWS * COLS);
	return middlsumma;
}
double Avg(double arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	double summa = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summa += arrayy[i][j];
		}
	}
	double middlsumma = summa / (ROWS * COLS);
	return middlsumma;
}
double Avg(char arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	char summa = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			summa += arrayy[i][j];
		}
	}
	char middlsumma = summa / (ROWS * COLS);
	return middlsumma;
}


int minValueIn(const int MyNumber, int arrayy[])
{
	int min = arrayy[0];
	for (int i = 1; i < MyNumber; i++)
	{
		if (min > arrayy[i])
			min = arrayy[i];
	}
	return min;
}
double minValueIn(const int MyNumber, double arrayy[])
{
	double min = arrayy[0];
	for (int i = 1; i < MyNumber; i++)
	{
		if (min > arrayy[i])
			min = arrayy[i];
	}
	return min;
}
double  minValueIn(const int MyNumber, char arrayy[])
{
	char min = arrayy[0];
	for (int i = 1; i < MyNumber; i++)
	{
		if (min > arrayy[i])
			min = arrayy[i];
	}
	return min;
}
int minValueIn(int arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arrayy[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arrayy[i][j])
				min = arrayy[i][j];
		}
		return min;
	}
}
double minValueIn(double arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arrayy[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arrayy[i][j])
				min = arrayy[i][j];
		}
		return min;
	}
}
double minValueIn(char arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = arrayy[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (min > arrayy[i][j])
				min = arrayy[i][j];
		}
		return min;
	}
}

int maxValueIn(const int MyNumber, int arrayy[])
{
	int max = arrayy[0];
	for (int i = 1; i < MyNumber; i++)
	{
		if (max < arrayy[i])
			max = arrayy[i];
	}
	return max;
}
double maxValueIn(const int MyNumber, double arrayy[])
{
	double max = arrayy[0];
	for (int i = 1; i < MyNumber; i++)
	{
		if (max < arrayy[i])
			max = arrayy[i];
	}
	return max;
}
double maxValueIn(const int MyNumber, char arrayy[])
{
	char max = arrayy[0];
	for (int i = 1; i < MyNumber; i++)
	{
		if (max < arrayy[i])
			max = arrayy[i];
	}
	return max;
}
int maxValueIn(int arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arrayy[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arrayy[i][j])
				max = arrayy[i][j];
		}
	}
	return max;
}
double maxValueIn(double arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arrayy[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arrayy[i][j])
				max = arrayy[i][j];
		}
	}
	return max;
}
double maxValueIn(char arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	char max = arrayy[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (max < arrayy[i][j])
				max = arrayy[i][j];
		}
	}
	return max;
}
