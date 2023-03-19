#include"Sort.h"
#include"stdafx.h"
#include"Constants.h"

void Sort(const int MyNumber, int arrayy[])
{
	for (int i = 0; i < MyNumber; i++)// счетчик iвыбирает элекмент в котороый нужно поместить минимальное значение 
	{
		for (int j = i + 1; j < MyNumber; j++) // счетчик j перебирает элементы в посиках минимального значения 
		{//(перебирает только правая часть массива - поэтому i+1)
			if (arrayy[j] < arrayy[i])
			{
				int buffer = arrayy[i];// переменная буфер  - это переменная для сохранения элементов массива
				arrayy[i] = arrayy[j];
				arrayy[j] = buffer;
			}
		}
	}
}
void Sort(const int MyNumber, double arrayy[])
{
	for (int i = 0; i < MyNumber; i++)// счетчик iвыбирает элекмент в котороый нужно поместить минимальное значение 
	{
		for (int j = i + 1; j < MyNumber; j++) // счетчик j перебирает элементы в посиках минимального значения 
		{//(перебирает только правая часть массива - поэтому i+1)
			if (arrayy[j] < arrayy[i])
			{
				double buffer = arrayy[i];// переменная буфер  - это переменная для сохранения элементов массива
				arrayy[i] = arrayy[j];
				arrayy[j] = buffer;
			}
		}
	}
}
void Sort(const int MyNumber, char arrayy[])
{
	for (int i = 0; i < MyNumber; i++)
	{
		for (int j = i + 1; j < MyNumber; j++)
		{
			if (arrayy[j] < arrayy[i])
			{
				char buffer = arrayy[i];
				arrayy[i] = arrayy[j];
				arrayy[j] = buffer;
			}
		}
	}
}
void Sort(int arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arrayy[k][l] < arrayy[i][j])
					{
						int buffer = arrayy[i][j];
						arrayy[i][j] = arrayy[k][l];
						arrayy[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
}
void Sort(double arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	double iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arrayy[k][l] < arrayy[i][j])
					{
						int buffer = arrayy[i][j];
						arrayy[i][j] = arrayy[k][l];
						arrayy[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
}
void Sort(char arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	char iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arrayy[k][l] < arrayy[i][j])
					{
						int buffer = arrayy[i][j];
						arrayy[i][j] = arrayy[k][l];
						arrayy[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
}