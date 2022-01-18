#include <iostream>
#include <string>
#include <clocale>

using namespace std;

int task1(int s) {
	cout << "Задача №1" << endl;
	int n;
	cout << "Введите цену за 1 килограмм конфет: ";
	cin >> n;
	for (double i = 0.1; i <= 1; i += 0.1) {
		cout << "Цена за " << i << " кг конфет = " << i * n << endl;
	}
	return 0;
}


int task2(int s) {
	cout << "Задача №2" << endl;
	int n;
	double sumpra = 1, pra = 1.1;
	cout << "Введите число N (>0) (кол-во сомножителей): ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sumpra = sumpra * pra;
		pra += 0.1;
	}
	cout << "Произведение вида 1.1 · 1.2 · 1.3.... (N сомножителей) = " << sumpra << endl;
	return 0;
}


int task3(int s) {
	cout << "Задача №3" << endl;
	int n, j, sumn = 0;
	cout << "Введите число N: ";
	cin >> n;
	cout << "Рассчитаем N^2 по формуле: 1 + 3 + 5 + . . . + (2·N - 1)\n";
	for (int i = 1; i <= n; i++) {
		j = 2 * i - 1;
		sumn += j;
		cout << sumn << endl;
	}
	cout << "N^2 = " << sumn << endl;
	return 0;
}


int task4(int s) {
	cout << "Задача №4" << endl;
	int n, sumn = 0;
	double a;
	cout << "Введите вещественное число A: ";
	cin >> a;
	cout << "Введите целое число N: ";
	cin >> n;
	for (int i = 0; i <= n; i++) {
		sumn += pow(a, i);
	}
	cout << "Сумма вида 1 + A + A^2 + A^3 + . . . + A^N = " << sumn << endl;
	return 0;
}


int task5(int s) {
	cout << "Задача №5" << endl;
	int n, sumn = 0;
	double a;
	cout << "Введите вещественное число A: ";
	cin >> a;
	cout << "Введите целое число N: ";
	cin >> n;
	for (int i = 0; i <= n; i++) {
		sumn += pow(-a, i);
	}
	cout << "Сумма вида 1 - A + A^2 - A^3 + . . . +- A^N = " << sumn << endl;
	return 0;
}


int main() {
	setlocale(LC_ALL, "");
	int n;
	T1:
	cout << "Выберете задачу (1-5):" << endl;
	cout << "Для выхода из программы введите '0'" << endl;
	cin >> n;
	if (n == 1) {
		task1(1);
	}
	else if (n == 2) {
		task2(1);
	}
	else if (n == 3) {
		task3(1);
	}
	else if (n == 4) {
		task4(1);
	}
	else if (n == 5) {
		task5(1);
	}
	else if (n != 0) {
		cout << "Такой задачи нет\n";
	}
	else if (n == 0) {
		return 0;
	}
	goto T1;
}