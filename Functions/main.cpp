#include<iostream>
using namespace std;

int Sum(int a, int b);
int Dif(int a, int b);
int Prodact(int a, int b);
double Quotient(int a, int b);

void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Sum(a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Dif(a,b) << endl;
	cout << a << "*" << b << "=" << Prodact(a, b) << endl;
	cout << a << "*" << b << "=" << Quotient(a, b) << endl;

}
int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Dif(int a, int b)
{
	return a - b;
}

int Prodact(int a, int b)
{
	return a * b;
}

double Quotient(int a, int b)
{
	return(double)a / b;
}
