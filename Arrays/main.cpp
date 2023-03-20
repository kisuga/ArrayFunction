#include <iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

const int ROWS = 5;//глобальная констанкта для работы с двумерными массивами - строки
const int COLS = 8;//константы можно объявлять глобально, в отличии от простых переменных) -  элементы столки (столбцы)

void FillRand(const int MyNumber, int arrayy[], int minRand = 0, int maxRand = 100);
void FillRand(const int MyNumber, double arrayy[], int minRand = 0, int maxRand = 100);
void FillRand(const int MyNumber, char arrayy[]);
void FillRand(int arrayy[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arrayy[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char arrayy[ROWS][COLS], const int ROWS, const int COLS);

void Print(const int MyNumber, int arrayy[]);
void Print(const int MyNumber, double arrayy[]);
void Print(const int MyNumber, char arrayy[]);
void Print(int arrayy[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arrayy[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arrayy[ROWS][COLS], const int ROWS, const int COLS);

int Sum(const int MyNumber, int arrayy[]);
double Sum(const int MyNumber, double arrayy[]);
double Sum(const int MyNumber, char arrayy[]);
int Sum(int arrayy[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arrayy[ROWS][COLS], const int ROWS, const int COLS);
double Sum(char arrayy[ROWS][COLS], const int ROWS, const int COLS);


double Avg(const int MyNumber, int arrayy[]);
double Avg(const int MyNumber, double arrayy[]);
double Avg(const int MyNumber, char arrayy[]);
int Avg(int arrayy[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arrayy[ROWS][COLS], const int ROWS, const int COLS);
double Avg(char arrayy[ROWS][COLS], const int ROWS, const int COLS);


int  minValueIn(const int MyNumber, int arrayy[]);
double  minValueIn(const int MyNumber, double arrayy[]);
double  minValueIn(const int MyNumber, char arrayy[]);
int minValueIn(int arrayy[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arrayy[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(char arrayy[ROWS][COLS], const int ROWS, const int COLS);



int maxValueIn(const int MyNumber, int arrayy[]);
double maxValueIn(const int MyNumber, double arrayy[]);
double maxValueIn(const int MyNumber, char arrayy[]);
int maxValueIn(int arrayy[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arrayy[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(char arrayy[ROWS][COLS], const int ROWS, const int COLS);


void Sort(const int MyNumber, int arrayy[]);
void Sort(const int MyNumber, double arrayy[]);
void Sort(const int MyNumber, char arrayy[]);
void Sort(int arrayy[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arrayy[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arrayy[ROWS][COLS], const int ROWS, const int COLS);

void shiftRight(const int MyNumber, int arrayy[]);
void shiftRight(const int MyNumber, double arrayy[]);
void shiftRight(const int MyNumber, char arrayy[]);
void shiftRight(int arrayy[ROWS][COLS], const int ROWS, const int COLS);
void shiftRight(double arrayy[ROWS][COLS], const int ROWS, const int COLS);
void shiftRight(char arrayy[ROWS][COLS], const int ROWS, const int COLS);


void shiftLeft(const int MyNumber, int arrayy[]);
void shiftLeft(const int MyNumber, double arrayy[]);
void shiftLeft(const int MyNumber, char arrayy[]);
void shiftLeft(int arrayy[ROWS][COLS], const int ROWS, const int COLS);
void shiftLeft(double arrayy[ROWS][COLS], const int ROWS, const int COLS);
void shiftLeft(char arrayy[ROWS][COLS], const int ROWS, const int COLS);

void UniqRand(const int MyNumber, int arrayy[]);
void UniqRand(const int MyNumber, double arrayy[]);
void UniqRand(const int MyNumber, char arrayy[]);


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


void shiftRight(const int MyNumber, int arrayy[])
{
	int buffer = arrayy[MyNumber - 1];
	for (int i = MyNumber - 1; i > 0; i++)
	{
		arrayy[i] = arrayy[i - 1];
	}
	arrayy[0] = buffer;

	for (int i = 0; i < MyNumber; i++)
	{
		cout << arrayy[i] << "\t";
	}
	cout << endl;
}
void shiftRight(const int MyNumber, double arrayy[])
{
	double buffer = arrayy[MyNumber - 1];
	for (int i = MyNumber - 1; i > 0; i++)
	{
		arrayy[i] = arrayy[i - 1];
	}
	arrayy[0] = buffer;

	for (int i = 0; i < MyNumber; i++)
	{
		cout << arrayy[i] << "\t";
	}
	cout << endl;
}
void shiftRight(const int MyNumber, char arrayy[])
{
	char buffer = arrayy[MyNumber - 1];
	for (int i = MyNumber - 1; i > 0; i++)
	{
		arrayy[i] = arrayy[i - 1];
	}
	arrayy[0] = buffer;

	for (int i = 0; i < MyNumber; i++)
	{
		cout << arrayy[i] << "\t";
	}
	cout << endl;
}
void shiftRight(int arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	int buffer = arrayy[ROWS - 1][COLS - 1];
	for (int i = ROWS - 1; i > 0; i++)
	{
		for (int j = COLS - 1; j > 0; j++)
		{
			arrayy[i][j] = arrayy[i - 1][j - 1];
		}
	}
	arrayy[0][0] = buffer;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arrayy[i][j] << "\t";
		}
	}
	cout << endl;
}
void shiftRight(double arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	double buffer = arrayy[ROWS - 1][COLS - 1];
	for (int i = ROWS - 1; i > 0; i++)
	{
		for (int j = COLS - 1; j > 0; j++)
		{
			arrayy[i][j] = arrayy[i - 1][j - 1];
		}
	}
	arrayy[0][0] = buffer;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arrayy[i][j] << "\t";
		}
	}
	cout << endl;
}
void shiftRight(char arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	char buffer = arrayy[ROWS - 1][COLS - 1];
	for (int i = ROWS - 1; i > 0; i++)
	{
		for (int j = COLS - 1; j > 0; j++)
		{
			arrayy[i][j] = arrayy[i - 1][j - 1];
		}
	}
	arrayy[0][0] = buffer;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arrayy[i][j] << "\t";
		}
	}
	cout << endl;
}

void shiftLeft(const int MyNumber, int arrayy[])
{
	int buffer = arrayy[0];
	for (int i = 0; i < MyNumber; i++)
	{
		arrayy[i] = arrayy[i + 1];
	}
	arrayy[MyNumber - 1] = buffer;
}
void shiftLeft(const int MyNumber, double arrayy[])
{
	double buffer = arrayy[0];
	for (int i = 0; i < MyNumber; i++)
	{
		arrayy[i] = arrayy[i + 1];
	}
	arrayy[MyNumber - 1] = buffer;
}
void shiftLeft(const int MyNumber, char arrayy[])
{
	char buffer = arrayy[0];
	for (int i = 0; i < MyNumber; i++)
	{
		arrayy[i] = arrayy[i + 1];
	}
	arrayy[MyNumber - 1] = buffer;
}
void shiftLeft(int arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	int buffer = arrayy[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arrayy[i][j] = arrayy[i + 1][j + 1];
		}
	}
	arrayy[ROWS - 1][COLS - 1] = buffer;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arrayy[i][j] << "\t";
		}
		cout << endl;
	}
}
void shiftLeft(double arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	double buffer = arrayy[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arrayy[i][j] = arrayy[i + 1][j + 1];
		}
	}
	arrayy[ROWS - 1][COLS - 1] = buffer;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arrayy[i][j] << "\t";
		}
		cout << endl;
	}
}
void shiftLeft(char arrayy[ROWS][COLS], const int ROWS, const int COLS)
{
	char buffer = arrayy[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arrayy[i][j] = arrayy[i + 1][j + 1];
		}
	}
	arrayy[ROWS - 1][COLS - 1] = buffer;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arrayy[i][j] << "\t";
		}
		cout << endl;
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
void UniqRand(const int MyNumber, double arrayy[])
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
					break;//  ключевое слово брейк прерывает текущую итерацию и все последуюшие
				}
			}
		} while (!unique);

	}
}
void UniqRand(const int MyNumber, char arrayy[])
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
					break;//  ключевое слово брейк прерывает текущую итерацию и все последуюшие
				}
			}
		} while (!unique);

	}
}
