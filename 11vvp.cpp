#include <iostream>

using namespace std;

int task1(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №1" << endl;
	int A, B;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	if ((A > B) || (B > A)) {
		A = max(A, B);
		B = A;
	}
	else {
		A = 0;
		B = 0;
	}
	cout << A << " " << B << endl;
	return 0;
}


int task2(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №2" << endl;
	int A, B, C, maxa, maxb;
	cout << "Введите число A: ";
	cin >> A;
	cout << "Введите число B: ";
	cin >> B;
	cout << "Введите число C: ";
	cin >> C;
	if ((A >= B) && (A >= C)) {
		maxa = A;
		if (B >= C) {
			maxb = B;
		}else {
			maxb = C;
		}
	}else if ((B >= A) && (B >= C)) {
		maxa = B;
		if (A >= C) {
			maxb = A;
		}
		else {
			maxb = C;
		}
	}else {
		maxa = C;
		if (A >= B) {
			maxb = A;
		}
		else {
			maxb = B;
		}
	}
	cout << "Сумма двух максимальных значений = " << maxa + maxb << endl;
	return 0;
}


int task3(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №3" << endl;
	int xa, ya, xb, yb, xc, yc, r1, r2;
	cout << "Введите координаты точки A: ";
	cin >> xa >> ya;
	cout << "Введите координаты точки B: ";
	cin >> xb >> yb;
	cout << "Введите координаты точки C: ";
	cin >> xc >> yc;
	r1 = pow(pow(abs(xa - xb), 2) + pow(abs(ya - yb), 2), 0.5);
	r2 = pow(pow(abs(xa - xc), 2) + pow(abs(ya - yc), 2), 0.5);
	if (r1 > r2) {
		cout << "Точка C - ближайшая к A. Расстояние = " << r2 << endl;
	}else if (r2 > r1) {
		cout << "Точка B - ближайшая к A. Расстояние = " << r1 << endl;
	}else {
		cout << "Расстояние до A с B и с C - равно. Расстояние = " << r1 << endl;
	}
	return 0;
}


int task4(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №4" << endl;
	int x, y;
	cout << "Введите координаты точки (точка не должна лежать на осях OX или OY): ";
	cin >> x >> y;
	if (x > 0 && y > 0) {
		cout << "Точка лежит в первой четверти\n";
	}else if (x < 0 && y > 0) {
		cout << "Точка лежит во второй четверти\n";
	}else if (x < 0 && y < 0) {
		cout << "Точка лежит в третьей четверти\n";
	}else if (x > 0 && y < 0) {
		cout << "Точка лежит в четвертой четверти\n";
	}
	return 0;
}


int task5(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №5" << endl;
	int A;
	cout << "Введите целое число: ";
	cin >> A;
	if (A == 0) {
		cout << "Нулевое число\n";
	}else if (A > 0 && A%2 == 0) {
		cout << "Положительное четное число\n";
	}else if (A > 0 && A % 2 != 0) {
		cout << "Положительное нечетное число\n";
	}else if (A < 0 && A % 2 == 0) {
		cout << "Отрицительное четное число\n";
	}else if (A < 0 && A % 2 != 0) {
		cout << "Отрицательное нечетное число\n";
	}
	return 0;
}


int task6(int s) {
	setlocale(LC_CTYPE, "rus");
	cout << "Задача №6" << endl;
	int A;
	cout << "Введите целое число от 1 до 999: ";
	cin >> A;
	if (A == 0 || A >999) {
		cout << "ты кажись не понял про от 1 до 999, да?\n";
	}
	else if (10 > A && A % 2 == 0) {
		cout << "Однозначное четное число\n";
	}
	else if (10 > A && A % 2 != 0) {
		cout << "Однозначное нечетное число\n";
	}
	else if (A < 100 && A % 2 == 0) {
		cout << "Двузначное четное число\n";
	}
	else if (A < 100 && A % 2 != 0) {
		cout << "Двузначное нечетное число\n";
	}
	else if (A < 1000 && A % 2 == 0) {
		cout << "Трехзначное четное число\n";
	}
	else if (A < 1000 && A % 2 != 0) {
		cout << "Трехзначное нечетное число\n";
	}
	return 0;
}


int main() {
	setlocale(LC_CTYPE, "rus");
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