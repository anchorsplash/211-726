#include <iostream>
#include <string>
#include <clocale>

using namespace std;

double PowerA3(double a, double b) {
	b = pow(a, 3);
	return b;
}


void task1(void) {
	cout << "Задача №1" << endl;
	double a, b;
	cout << "Введите число A: ";
	cin >> a;
	cout << "3 степень числа = " << PowerA3(a, 1) << endl;
}

int Sign(double x) {
	if (x < 0) return -1;
	if (x == 0) return 0;
	if (x > 0) return 1;
}


void task2(void) {
	cout << "Задача №2" << endl;
	double a, b;
	cout << "Введите число A: ";
	cin >> a;
	cout << "Введите число B: ";
	cin >> b;
	cout << "Функция Sign возращает -1, если X < 0; 0, если X = 0; 1, если X > 0.\n" 
		<< "Sign(A) + Sign(B) = " << Sign(a) + Sign(b) << endl;
}


double RingS(double r1, double r2) {
	double S;
	S = (3.14 * pow(r1, 2)) - (3.14 * pow(r2, 2));
	return S;
}


void task3(void) {
	T2:
	cout << "Задача №3" << endl;
	double r1, r2;
	cout << "Введите число R1 (R1 > R2): ";
	cin >> r1;
	cout << "Введите число R2 (R1 > R2): ";
	cin >> r2;
	if (r1 <= r2) {
		cout << "Поздравим нуба с лишней хромосомой\n";
		goto T2;
	}
	cout << "Площадь кольца, заключенного между двумя окружностями с общим центром и радиусами R1 и R2 = " << RingS(r1, r2) << endl;
}


int Quarter(double x, double y) {
	if (x > 0 && y > 0) return 1;
	if (x < 0 && y > 0) return 2;
	if (x < 0 && y < 0) return 3;
	if (x > 0 && y < 0) return 4;
}


void task4(void) {
	cout << "Задача №4" << endl;
	double x, y;
	cout << "Введите координату x (ненулевую): ";
	cin >> x;
	cout << "Введите координату y (ненулевую): ";
	cin >> y;
	cout << "Номер координатной четверти: " << Quarter(x, y) << endl;
}


double Fact2(int n) {
	double sumfact = 1;
	if (n % 2 != 0) {
		for (int i = 1; i <= n; i += 2) {
			sumfact *= i;
		}
		return sumfact;
	}else {
		for (int i = 2; i <= n; i += 2) {
			sumfact *= i;
		}
		return sumfact;
	}
}


void task5(void) {
	T2:
	cout << "Задача №5" << endl;
	int n;
	cout << "Введите целое число N (N>0): ";
	cin >> n;
	if (n <= 0) {
		cout << "Поздравим нуба с лишней хромосомой\n";
		goto T2;
	}
	cout << "Двойной факториал числа N = " << Fact2(n) << endl;
}


int main() {
	setlocale(LC_ALL, "");
	int n;
	T1:
	cout << "Выберете задачу (1-5):" << endl;
	cout << "Для выхода из программы введите '0'" << endl;
	cin >> n;
	if (n == 1) task1();
	else if (n == 2) task2();
	else if (n == 3) task3();
	else if (n == 4) task4();
	else if (n == 5) task5();
	else if (n != 0) cout << "Такой задачи нет\n";
	else if (n == 0) return 0;
	goto T1;
}