#include<iostream>
using namespace std;

void FillRand(const int MyNumber,  int arrayy[]);
void Print(const int MyNumber, int arrayy[]);
void Sum(const int MyNumber, int arrayy[]);
void Avg(const int MyNumber, int arrayy[]);
void minValueIn(const int MyNumber, int arrayy[]);
void maxValueIn(const int MyNumber, int arrayy[]);
void Sort(const int MyNumber, int arrayy[]);
void main()
{
	setlocale(LC_ALL, "Russian");
	const int MyNumber = 10;
	int arrayy[MyNumber];
	FillRand(arrayy, MyNumber);
	Print(arrayy, MyNumber);
	Sum(arrayy, MyNumber);
	Avg(arrayy, MyNumber);
}

void FillRand(int arrayy[], const int MyNumber)
{
	for (int i = 0; i < MyNumber; i++)
	{
		arrayy[i] = rand();
	}
}
void Print(int arrayy[], const int MyNumber)
{
	for (int i = 0; i < MyNumber; i++)
	{
		cout << arrayy[i];
	}
	cout << endl;
}
void Sum(int arrayy[], const int MyNumber)
{
	for (int i = 0; i < MyNumber; i++)
	{
		int summa = 0;
		for (int i = 0; i < MyNumber; i++)
		{
			summa += arrayy[i];
		}
		cout << "Сумма всех элементов массива равна:" << summa;
		cout << endl;
	}
}
void Avg(const int MyNumber, int arrayy[])
{
	int summa = 0;
	for (int i = 0; i < MyNumber; i++)
	{
		summa += arrayy[i];
	}
	int middlaref = summa / MyNumber;
	cout << "Среднее арифметическое элементов массива:" << middlaref << endl;
}

		
	





	







	

