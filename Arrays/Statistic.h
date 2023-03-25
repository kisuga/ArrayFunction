#pragma once
#include"Stdafx.h"
#include"Constants.h"

template<typename T>
int Sum(const int MyNumber, T arrayy[]);
template<typename T>
int Sum(T arrayy[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
double Avg(const int MyNumber, T arrayy[]);
template<typename T>
int Avg(T arrayy[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
int  minValueIn(const int MyNumber, T arrayy[]);
template<typename T>
int minValueIn(T arrayy[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
int maxValueIn(const int MyNumber, T arrayy[]);
template<typename T>
int maxValueIn(T arrayy[ROWS][COLS], const int ROWS, const int COLS);
