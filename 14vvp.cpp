#include <iostream>
#include <string>
#include <clocale>

using namespace std;

int task1(int s) {
	T2:
	cout << "Задача №1" << endl;
	int A, B;
	cout << "Введите число A (A<B): ";
	cin >> A;
	cout << "Введите число B (A<B): ";
	cin >> B;
	if (A > B) {
		cout << "Поздравим нуба с лишней хромосомой\n";
		goto T2;
	}
	for (int i = A; i <= B; i++) {
		for (int j = 1; j <= i; j++) {
			cout << i << endl;
		}
	}
	return 0;
}


int task2(int s) {
	T2:
	cout << "Задача №2" << endl;
	int A, B;
	cout << "Введите длину отрезка A (A>B): ";
	cin >> A;
	cout << "Введите длину отрезка число B (A>B): ";
	cin >> B;
	if (A < B) {
		cout << "Поздравим нуба с лишней хромосомой\n";
		goto T2;
	}
	for (int i = A; i >= B; i -= B) {
		A -= B;
	}
	cout << "Длина незанятой части отрезка A = " << A << endl;
	return 0;
}


int task3(int s) {
	cout << "Задача №3" << endl;
	int n, k, sumk = 0;
	cout << "Введите число N: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sumk += i;
		if (sumk >= n) {
			k = i;
			break;
		}
	}
	cout << "Минимальное целое K для заданного N = " << k << "\nСумма вида: 1 + 2 +.... + K = " << sumk << endl;;
	return 0;
}


int task4(int s) {
	cout << "Задача №4" << endl;
	double p, S = 1000;
	int k = 0;
	cout << "Сумма вклада = 1000\n";
	cout << "Введите число P - проценты по вкладу (0-25): ";
	cin >> p;
	while (S < 1100) {
		S = S * (1 + p / 100);
		k += 1;
	}
	cout << "Кол-во месяцев = " << k << "\nИтоговая сумма = " << S << endl;
	return 0;
}


int task5(int s) {
	cout << "Задача №5" << endl;
	int A, B;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	if (B > A) swap(A, B);
	while (A % B != 0) {
		A = A % B;
		swap(A, B);
	}
	cout << "НОД (A, B) = " << B << endl;
	return 0;
}


int task6(int s) {
	cout << "Задача №6" << endl;
	int n, f1 = 0, f2 = 1, f = 0, k = 2;
	cout << "Введите число N (N - число Фибоначчи): ";
	cin >> n;
	while (f < n) {
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		k++;
	}
	cout << "Позиция числа N в последовательности - " << k << endl;
	return 0;
}


int main() {
	setlocale(LC_ALL, "");
	int n;
	T1:
	cout << "Выберете задачу (1-6):" << endl;
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
	else if (n == 6) {
		task6(1);
	}
	else if (n != 0) {
		cout << "Такой задачи нет\n";
	}
	else if (n == 0) {
		return 0;
	}
	goto T1;
}
