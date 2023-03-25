#include "Stdafx.h"
#include"Constants.h"

#include"FillRand.h"
#include"Print.cpp"
#include"Sort.cpp"
#include"Statistic.cpp"
#include"Shift.cpp"

void main()
{
	setlocale(LC_ALL, "Russian");
	const int MyNumber = 10;
	int arrayy[MyNumber];
	int minRand = 200, maxRand = 300;

	FillRand(MyNumber, arrayy, minRand, maxRand);
	Print(MyNumber, arrayy);
	Sum(MyNumber, arrayy);
	cout << "����� ��������� �������<:" << Sum(MyNumber, arrayy) << endl;
	Avg(MyNumber, arrayy);
	cout << "�������������������� �������� �������:" << Avg(MyNumber, arrayy) << endl;

	cout << "����������� �������� �������:" << minValueIn(MyNumber, arrayy) << endl;
	minValueIn(MyNumber, arrayy);

	cout << "������������ �������� �������:" << maxValueIn(MyNumber, arrayy) << endl;
	maxValueIn(MyNumber, arrayy);

	cout << "���������� �������:" << endl;
	Sort(MyNumber, arrayy);
	Print(MyNumber, arrayy);

	cout << "����� ������� ������:" << endl;
	shiftRight(MyNumber, arrayy);
	Print(MyNumber, arrayy);

	cout << "����� ������� �����:" << endl;
	shiftLeft(MyNumber, arrayy);
	Print(MyNumber, arrayy);

	cout << "������ � ����������� �������:" << endl;
	UniqRand(MyNumber, arrayy);
	Print(MyNumber, arrayy);

	cout << "��������� ������:" << endl;
	int i_arrayy_2[ROWS][COLS];


	FillRand(i_arrayy_2, ROWS, COLS);
	Print(i_arrayy_2, ROWS, COLS);

	cout << "����� ��������� �������<:" << Sum(i_arrayy_2, ROWS, COLS) << endl;
	Sum(i_arrayy_2, ROWS, COLS);
	cout << "�������������������� �������� �������:" << Avg(i_arrayy_2, ROWS, COLS) << endl;
	Avg(i_arrayy_2, ROWS, COLS);
	cout << "����������� �������� �������:" << minValueIn(i_arrayy_2, ROWS, COLS) << endl;
	minValueIn(i_arrayy_2, ROWS, COLS);
	cout << "������������ �������� �������:" << maxValueIn(i_arrayy_2, ROWS, COLS) << endl;
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

//void FillRand(const int MyNumber, int arrayy[], int minRand, int maxRand)
//{
//	for (int i = 0; i < MyNumber; i++)
//	{
//		arrayy[i] = rand() % (maxRand - minRand) + minRand;
//	}
//	cout << endl;
//}
//void FillRand(const int MyNumber, double arrayy[], int minRand, int maxRand)
//{
//	minRand *= 100;
//	maxRand *= 100;
//	for (int i = 0; i < MyNumber; i++)
//	{
//		arrayy[i] = rand() % (maxRand - minRand) + minRand;
//		arrayy[i] /= 100;
//	}
//	cout << endl;
//}
//void FillRand(const int MyNumber, char arrayy[])
//{
//	for (int i = 0; i < MyNumber; i++)
//	{
//		arrayy[i] = rand();
//	}
//	cout << endl;
//}
//
//void FillRand(int arrayy[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			arrayy[i][j] = rand() % (maxRand - minRand) + minRand;
//		}
//	}
//}
//void FillRand(double arrayy[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
//{
//	minRand *= 100;
//	maxRand *= 100;
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			arrayy[i][j] = double(rand() % (maxRand - minRand) + minRand / 100);
//		}
//	}
//}
//void FillRand(char arrayy[ROWS][COLS], const int ROWS, const int COLS)
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			arrayy[i][j] = rand();
//		}
//	}
//}
//
//
//template<typename T>void Print(const int MyNumber, T arrayy[])
//{
//	for (int i = 0; i < MyNumber; i++)
//	{
//		cout << arrayy[i] << "\t";
//	}
//	cout << endl;
//}
//template<typename T>void Print(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
//{
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			cout << arrayy[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//}
//
//template<typename T>int Sum(const int MyNumber, T arrayy[])
//{
//	int summa = 0;
//	for (int i = 0; i < MyNumber; i++)
//	{
//		summa += arrayy[i];
//	}
//	return summa;
//}
//template<typename T>int Sum(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
//{
//	int summa = 0;
//	{
//		for (int i = 0; i < ROWS; i++)
//		{
//			for (int j = 0; j < COLS; j++)
//			{
//				summa += arrayy[i][j];
//			}
//		}
//	}
//	return summa;
//}
//
//
////double Avg(const int MyNumber, int arrayy[]) //- ������� ����� ������������
////{
//	//return (double)Sum(MyNumber, arrayy) / MyNumber;
////}
////double Avg(const int MyNumber, double arrayy[]) //- ������� ����� ������������
////{
//	//return Sum(MyNumber, arrayy) / MyNumber; //- ��� ���������� ���� ������� ������ 
////������� �������������� ����������
////}
//
//template<typename T>double Avg(const int MyNumber, T arrayy[])
//{
//	int summa = 0;
//	for (int i = 0; i < MyNumber; i++)
//	{
//		summa += arrayy[i];
//	}
//	int middlsumma = summa / MyNumber;
//	return middlsumma;
//}
//template<typename T>int Avg(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
//{
//	int summa = 0;
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			summa += arrayy[i][j];
//		}
//	}
//	int middlsumma = summa / (ROWS * COLS);
//	return middlsumma;
//}
//
//template<typename T>int minValueIn(const int MyNumber, T arrayy[])
//{
//	int min = arrayy[0];
//	for (int i = 1; i < MyNumber; i++)
//	{
//		if (min > arrayy[i])
//			min = arrayy[i];
//	}
//	return min;
//}
//template<typename T>int minValueIn(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
//{
//	int min = arrayy[0][0];
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			if (min > arrayy[i][j])
//				min = arrayy[i][j];
//		}
//		return min;
//	}
//}
//
//template<typename T>int maxValueIn(const int MyNumber, T arrayy[])
//{
//	int max = arrayy[0];
//	for (int i = 1; i < MyNumber; i++)
//	{
//		if (max < arrayy[i])
//			max = arrayy[i];
//	}
//	return max;
//}
//template<typename T>int maxValueIn(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
//{
//	int max = arrayy[0][0];
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			if (max < arrayy[i][j])
//				max = arrayy[i][j];
//		}
//	}
//	return max;
//}
//
//template<typename T>void Sort(const int MyNumber, T arrayy[])
//{
//	for (int i = 0; i < MyNumber; i++)// ������� i�������� �������� � �������� ����� ��������� ����������� �������� 
//	{
//		for (int j = i + 1; j < MyNumber; j++) // ������� j ���������� �������� � ������� ������������ �������� 
//		{//(���������� ������ ������ ����� ������� - ������� i+1)
//			if (arrayy[j] < arrayy[i])
//			{
//				int buffer = arrayy[i];// ���������� �����  - ��� ���������� ��� ���������� ��������� �������
//				arrayy[i] = arrayy[j];
//				arrayy[j] = buffer;
//			}
//		}
//	}
//}
//template<typename T>void Sort(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
//{
//	int iterations = 0;
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			for (int k = i; k < ROWS; k++)
//			{
//				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
//				{
//					if (arrayy[k][l] < arrayy[i][j])
//					{
//						int buffer = arrayy[i][j];
//						arrayy[i][j] = arrayy[k][l];
//						arrayy[k][l] = buffer;
//					}
//					iterations++;
//				}
//			}
//		}
//	}
//}
//
//template<typename T>void shiftRight(const int MyNumber, T arrayy[])
//{
//	int buffer = arrayy[MyNumber - 1];
//	for (int i = MyNumber - 1; i > 0; i++)
//	{
//		arrayy[i] = arrayy[i - 1];
//	}
//	arrayy[0] = buffer;
//
//	for (int i = 0; i < MyNumber; i++)
//	{
//		cout << arrayy[i] << "\t";
//	}
//	cout << endl;
//}
//template<typename T>void shiftRight(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
//{
//	int buffer = arrayy[ROWS - 1][COLS - 1];
//	for (int i = ROWS - 1; i > 0; i++)
//	{
//		for (int j = COLS - 1; j > 0; j++)
//		{
//			arrayy[i][j] = arrayy[i - 1][j - 1];
//		}
//	}
//	arrayy[0][0] = buffer;
//
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			cout << arrayy[i][j] << "\t";
//		}
//	}
//	cout << endl;
//}
//
//template<typename T>void shiftLeft(const int MyNumber, T arrayy[])
//{
//	int buffer = arrayy[0];
//	for (int i = 0; i < MyNumber; i++)
//	{
//		arrayy[i] = arrayy[i + 1];
//	}
//	arrayy[MyNumber - 1] = buffer;
//}
//template<typename T>void shiftLeft(T arrayy[ROWS][COLS], const int ROWS, const int COLS)
//{
//	int buffer = arrayy[0][0];
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			arrayy[i][j] = arrayy[i + 1][j + 1];
//		}
//	}
//	arrayy[ROWS - 1][COLS - 1] = buffer;
//
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			cout << arrayy[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}
//
//template<typename T>void UniqRand(const int MyNumber, T arrayy[])
//{
//	for (int i = 0; i < MyNumber; i++)
//	{
//		bool unique;//���� 
//		do
//		{
//			arrayy[i] = rand() % MyNumber;
//			unique = true; // ������������,��� ��������� ����� ���������
//			// �� ��� ����� ���������
//			for (int j = 0; j < i; j++)
//			{
//				if (arrayy[i] == arrayy[j])
//				{
//					unique = false;
//					break;//  �������� ����� ����� ��������� ������� �������� � ��� �����������
//				}
//			}
//		} while (!unique);
//
//	}
//}
//void UniqRand(const int MyNumber, double arrayy[])
//{
//	for (int i = 0; i < MyNumber; i++)
//	{
//		bool unique;//���� 
//		do
//		{
//			arrayy[i] = rand() % MyNumber;
//			unique = true; // ������������,��� ��������� ����� ���������
//			// �� ��� ����� ���������
//			for (int j = 0; j < i; j++)
//			{
//				if (arrayy[i] == arrayy[j])
//				{
//					unique = false;
//					break;//  �������� ����� ����� ��������� ������� �������� � ��� �����������
//				}
//			}
//		} while (!unique);
//
//	}
//}
//void UniqRand(const int MyNumber, char arrayy[])
//{
//	for (int i = 0; i < MyNumber; i++)
//	{
//		bool unique;//���� 
//		do
//		{
//			arrayy[i] = rand() % MyNumber;
//			unique = true; // ������������,��� ��������� ����� ���������
//			// �� ��� ����� ���������
//			for (int j = 0; j < i; j++)
//			{
//				if (arrayy[i] == arrayy[j])
//				{
//					unique = false;
//					break;//  �������� ����� ����� ��������� ������� �������� � ��� �����������
//				}
//			}
//		} while (!unique);
//
//	}
//}
