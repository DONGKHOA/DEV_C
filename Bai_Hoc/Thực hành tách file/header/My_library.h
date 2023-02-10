#ifndef _MY_LIBRARY
#define _MY_LIBRARY
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "..\resource\My_library.c"

// declare function check prime number
bool CheckPrimeNumber(int n);


// declare function check perfect number
bool CheckPerfectNumber(int n);



// declare function solve quadratic equation
void SolveQuadraticEquation(float a, float b, float c);

#endif