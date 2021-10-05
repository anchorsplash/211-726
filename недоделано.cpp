#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//1
	setlocale(LC_ALL, "rus");
	cout << "1. b = x * y + z\n";
	int x;
	cout << "Введите значение переменной x\n";
	cin >> x;
	int y;
	cout << "Введите значение переменной y\n";
	cin >> y;
	int z;
	cout << "Введите значение переменной z\n";
	cin >> z;
	int b = x * y + z;
	cout << "b = ";
	cout << b << endl << endl;

	//2
	cout << "2. b = x / y\n";
	int x1;
	cin >> x1;
	cout << "Введите значение переменной x\n";
	int y1;
	do {
		cin >> y1;
		cout << "Введите значение переменной y\n";
	} while (y != 0);
}