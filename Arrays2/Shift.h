#pragma once
#include"Constants.h"
#include"stdafx.h"

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