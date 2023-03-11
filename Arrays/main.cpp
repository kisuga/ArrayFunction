#include<iostream>
using namespace std;

void FillRand(const int MyNumber, int arrayy[]);
void Print(const int MyNumber, int arrayy[]);
int Sum(const int MyNumber, int arrayy[]);
void Avg(const int MyNumber, int arrayy[]);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int MyNumber = 10;
	int arrayy[MyNumber];
	FillRand(MyNumber, arrayy);
	Print(MyNumber, arrayy);
	Sum(MyNumber, arrayy);
	Avg(MyNumber, arrayy);
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
int Sum(int arrayy[], const int MyNumber)
{
	for (int i = 0; i < MyNumber; i++)
	{
		int summa = 0;
		for (int i = 0; i < MyNumber; i++)
		{
			summa += arrayy[i];
		}
		return summa;
	}
}
void Avg(const int MyNumber, int arrayy[])
{
	int summa = 0;
	for (int i = 0; i < MyNumber; i++)
	{
		summa += arrayy[i];
	}
	int middlsumma = summa / MyNumber;
	cout << "Среднее арифметическое элементов массива:" << middlsumma << endl;
	cout << endl;
}


















