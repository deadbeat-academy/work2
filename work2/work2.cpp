﻿#include<iostream>
#include<windows.h>
#include<string>
#include<string.h>
#include<fstream>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

int doublesum(int a, int b) {
	return 2 * (a + b);
}

int foublesum(int a, int b) {
	return 4 * (a + b);
}

int triplesum(int a, int b) {
	return 3 * (a + b);
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//setlocale(LC_ALL, "RU");
	srand(time(NULL));

	int a = 10, b = 5;
	cout << a << " + " << b << " = " << sum(a, b);
	cout << "3 * (" << a << " + " << b << ") = " << triplesum(a, b);
	cout << "4 * (" << a << " + " << b << ") = " << foublesum(a, b);

	return 0;
}