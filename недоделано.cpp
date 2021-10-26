#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//1
	setlocale(LC_ALL, "rus");
	cout << "1. b = x * y + z\n\n";
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
	cout << "2. x > y + 1\n\n";
	int x2;
	cout << "Введите значение переменной x\n";
	cin >> x2;
	int y2;
	cout << "Введите значение переменной y\n";
	cin >> y2;
	if (x > y + 1 == true) {
		cout << "Выражение верно!\n";
	}
	else {
		cout << "тЫ ЕБЛАН!!!!!!\n\n";
	}


	//3
	cout << "3. b = x / y\n";
	int x1;
	cin >> x1;
	cout << "Введите значение переменной x\n";
	int y1;
	do {
		cin >> y1;
		cout << "Введите значение переменной y\n";
	} while (y == 0);
	cout << 


}
