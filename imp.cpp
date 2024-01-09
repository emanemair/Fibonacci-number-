#include"Fibonacci.h"
#include<iostream>
using namespace std;




int fNum(int a, int b, int n) {
	if (n == 1)
		return a;
	if (n == 2)
		return b;
	else {
		return fNum(a, b, n - 1) + fNum(a, b, n - 2); 
	}
}