#include"Sort.h"


template<typename T>
void Sort(const int MyNumber, T arrayy[])
{
	for (int i = 0; i < MyNumber; i++)// ������� i�������� �������� � �������� ����� ��������� ����������� �������� 
	{
		for (int j = i + 1; j < MyNumber; j++) // ������� j ���������� �������� � ������� ������������ �������� 
		{//(���������� ������ ������ ����� ������� - ������� i+1)
			if (arrayy[j] < arrayy[i])
			{
				T buffer = arrayy[i];// ���������� �����  - ��� ���������� ��� ���������� ��������� �������
				arrayy[i] = arrayy[j];
				arrayy[j] = buffer;
			}
		}
	}
}
template<typename T>
void Sort(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	T iterations = 0;
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
						T buffer = arrayy[i][j];
						arrayy[i][j] = arrayy[k][l];
						arrayy[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
}
