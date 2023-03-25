#include"Statistic.h"

template<typename T>
int Sum(const int MyNumber, T arrayy[])
{
	T summa = 0;
	for (int i = 0; i < MyNumber; i++)
	{
		summa += arrayy[i];
	}
	return summa;
}
template<typename T>
int Sum(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	T summa = 0;
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

template<typename T>
double Avg(const int MyNumber, T arrayy[])
{
	T summa = 0;
	for (int i = 0; i < MyNumber; i++)
	{
		summa += arrayy[i];
	}
	int middlsumma = summa / MyNumber;
	return middlsumma;
}
template<typename T>
int Avg(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	T summa = 0;
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


template<typename T>
int minValueIn(const int MyNumber, T arrayy[])
{
	T min = arrayy[0];
	for (int i = 1; i < MyNumber; i++)
	{
		if (min > arrayy[i])
			min = arrayy[i];
	}
	return min;
}
template<typename T>
int minValueIn(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arrayy[0][0];
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


template<typename T>
int maxValueIn(const int MyNumber, T arrayy[])
{
	T max = arrayy[0];
	for (int i = 1; i < MyNumber; i++)
	{
		if (max < arrayy[i])
			max = arrayy[i];
	}
	return max;
}
template<typename T>
int maxValueIn(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arrayy[0][0];
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

