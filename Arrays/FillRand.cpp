#include"FillRand.h"


void FillRand(const int MyNumber, int arrayy[], int minRand, int maxRand)
{
	for (int i = 0; i < MyNumber; i++)
	{
		arrayy[i] = rand() % (maxRand - minRand) + minRand;
	}
	cout << endl;
}
void FillRand(const int MyNumber, double arrayy[], int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < MyNumber; i++)
	{
		arrayy[i] = rand() % (maxRand - minRand) + minRand;
		arrayy[i] /= 100;
	}
	cout << endl;
}
void FillRand(const int MyNumber, char arrayy[])
{
	for (int i = 0; i < MyNumber; i++)
	{
		arrayy[i] = rand();
	}
	cout << endl;
}

void FillRand(int arrayy[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arrayy[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(double arrayy[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arrayy[i][j] = double(rand() % (maxRand - minRand) + minRand / 100);
		}
	}
}
void FillRand(char arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arrayy[i][j] = rand();
		}
	}
}

void UniqRand(const int MyNumber, int arrayy[])
{
	for (int i = 0; i < MyNumber; i++)
	{
		bool unique;//флаг 
		do
		{
			arrayy[i] = rand() % MyNumber;
			unique = true; // предполагаем,что случайное число уникально
			// но это нужно проверить
			for (int j = 0; j < i; j++)
			{
				if (arrayy[i] == arrayy[j])
				{
					unique = false;
					break;//  ключенов слово брейк прерывает текущую итерацию и все последуюшие
				}
			}
		} while (!unique);

	}
}
