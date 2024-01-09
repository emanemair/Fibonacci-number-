#include<iostream>
using namespace std; 
#include"Fibonacci.h"


int main()
{
	int firstFibNum;
	int secondFibNum;
	int nth;
	cout << "Enter the first Fibonacci number: ";
	cin >> firstFibNum;
	cout << endl;
	cout << "Enter the second Fibonacci number: ";
	cin >> secondFibNum;
	cout << endl;
	cout << "Enter the position of the desired Fibonacci number: ";
	cin >> nth;
	cout << endl;
	cout << "The Fibonacci number at position " << nth
	<< " is: " << fNum(firstFibNum, secondFibNum, nth)
	<< endl;
	return 0; 
}
