#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistic.h"
#include"Shift.h"


void main()
{
	setlocale(LC_ALL, "Russian");
	const int MyNumber = 10;
	int arrayy[MyNumber];
	int minRand = 200, maxRand = 300;

	FillRand(MyNumber, arrayy, minRand, maxRand);
	Print(MyNumber, arrayy);
	Sum(MyNumber, arrayy);
	cout << "Сумма элементов массива<:" << Sum(MyNumber, arrayy) << endl;
	Avg(MyNumber, arrayy);
	cout << "Среднеарифметическое значение массива:" << Avg(MyNumber, arrayy) << endl;

	cout << "Минимальное значение массива:" << minValueIn(MyNumber, arrayy) << endl;
	minValueIn(MyNumber, arrayy);

	cout << "Максимальное значение массива:" << maxValueIn(MyNumber, arrayy) << endl;
	maxValueIn(MyNumber, arrayy);

	cout << "Сортировка массива:" << endl;
	Sort(MyNumber, arrayy);

	cout << "Сдвиг массива вправо:" << endl;
	shiftRight(MyNumber, arrayy);

	cout << "Вдвиг массива влево:" << endl;
	shiftLeft(MyNumber, arrayy);

	cout << "Массив с уникальными числами:" << endl;
	UniqRand(MyNumber, arrayy);

	cout << "Двумерный массив:" << endl;
	int i_arrayy_2[ROWS][COLS];


	FillRand(i_arrayy_2, ROWS, COLS);
	Print(i_arrayy_2, ROWS, COLS);

	cout << "Сумма элементов массива<:" << Sum(i_arrayy_2, ROWS, COLS) << endl;
	Sum(i_arrayy_2, ROWS, COLS);
	cout << "Среднеарифметическое значение массива:" << Avg(i_arrayy_2, ROWS, COLS) << endl;
	Avg(i_arrayy_2, ROWS, COLS);
	cout << "Минимальное значение массива:" << minValueIn(i_arrayy_2, ROWS, COLS) << endl;
	minValueIn(i_arrayy_2, ROWS, COLS);
	cout << "Максимальное значение массива:" << maxValueIn(i_arrayy_2, ROWS, COLS) << endl;
	maxValueIn(i_arrayy_2, ROWS, COLS);

	shiftRight(i_arrayy_2, ROWS, COLS);
	shiftLeft(i_arrayy_2, ROWS, COLS);

	//const int SIZE = 8;
	//double brr[SIZE];

	//FillRand(brr, SIZE);
	//Print(brr, SIZE);
	//shiftLeft(brr, SIZE);
	//shiftRight(brr, SIZE);

	double d_arrayy_2[ROWS][COLS] =
	{
		{2.5,3.14,4.2},
		{7.8,5.1,2.7},
		{1.1,2.3,4.7}
	};
	FillRand(d_arrayy_2, ROWS, COLS);

}













