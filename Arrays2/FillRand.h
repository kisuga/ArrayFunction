#pragma once
#include"stdafx.h"
#include"Constants.h"


void FillRand(const int MyNumber, int arrayy[], int minRand = 0, int maxRand = 100);
void FillRand(const int MyNumber, double arrayy[], int minRand = 0, int maxRand = 100);
void FillRand(const int MyNumber, char arrayy[]);
void FillRand(int arrayy[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arrayy[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char arrayy[ROWS][COLS], const int ROWS, const int COLS);

void UniqRand(const int MyNumber, int arrayy[]);
void UniqRand(const int MyNumber, double arrayy[]);
void UniqRand(const int MyNumber, char arrayy[]);