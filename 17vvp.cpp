#include <iostream>
#include <vector>

using namespace std;

void task1(void) {
	cout << "Задача №1" << endl;
	int n, k, l, sumn = 0, count = 0;
	cout << "Введите число N: ";
	cin >> n;
	cout << "Введите число K (1 =< K =< L =< N): ";
	cin >> k;
	cout << "Введите число L (1 =< K =< L =< N): ";
	cin >> l;
	vector <int> mas1;
	for (int i = 0; i < n ; i ++) {
		mas1.push_back(i);
	}
	for (int n = k; n <= l; n++){
		sumn += mas1[n];
		count++;
	}
	double aversumn = double (sumn) / count;
	cout << "Среднее арифметическое элементов массива с номерами от K до L = " << aversumn << endl;
}


void task2(void) {
	cout << "Задача №2" << endl;
	int n, a, razn;
	bool flag = true;
	cout << "Введите число N: ";
	cin >> n;
	vector <int> mas1;
	for (int i = 0; i < n; i++) {
		cout << "Введите эллемент массива (в массиве не должно быть одинаковых элементов!): ";
		cin >> a;
		mas1.push_back(a);
	}
	for (int j = 0; j < n; j++) {
		cout << mas1[j] << " ";
	}
	razn = mas1[1] - mas1[0];
	for (int a = 2; a < n - 1; a++) {
		if (razn == mas1[a + 1] - mas1[a]) {
			flag;
		}else flag = false;
	}
	if (flag) {
		cout << "Разность прогрессии = " << razn << endl;
	}else cout << "0" << endl;
}


void task3(void) {
	cout << "Задача №3" << endl;
	int n, a, min;
	cout << "Введите размер массива N:";
	cin >> n;
	vector <int> A;
	for (int i = 0; i < n; i++) {
		cout << "Введите эллемент массива A: ";
		cin >> a;
		A.push_back(a);
	}
	min = A[0];
	for (int i = 2; i < n; i += 2) {
		if (A[i] < min) {
			min = A[i];
		}
	}
	cout << "Минимальный элемент в четных индексах массива A = " << min << endl;
}


void task4(void) {
	cout << "Задача №4" << endl;
	int n, a, maxn;
	bool flag = false;
	cout << "Введите размер массива N:";
	cin >> n;
	vector <int> A;
	for (int i = 0; i < n; i++) {
		cout << "Введите эллемент массива A: ";
		cin >> a;
		A.push_back(a);
	}
	for (int i = 1; i < n - 1; i++) {
		if ((A[i - 1] < A[i]) && (A[i] > A[i + 1])) {
			maxn = A[i];
			flag = true;
		}
	}
	if (flag) {
		cout << "Последний локальный максимум = " << maxn << endl;
	}else {
		cout << "Последний локальный максимум отсутствует" << endl;
	}
}


void task5(void) {
	cout << "Задача №5" << endl;
	int n, a;
	cout << "Введите размер массива N:";
	cin >> n;
	vector <int> A;
	for (int i = 0; i < n; i++) {
		cout << "Введите эллемент массива A (в массиве должно быть ровно два одинаковых элемента!!!!!!!!): ";
		cin >> a;
		A.push_back(a);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (A[i] == A[j]) {
				cout << "Номера одинаковых элементов: " << i << " " << j << endl;
			}
		}
	}
}


int main() {
	setlocale(LC_ALL, "");
	int n;
	do {
		cout << "Выберете задачу (1-5):" << endl;
		cout << "Для выхода из программы введите '0'" << endl;
		cin >> n;
		if (n == 1) task1();
		else if (n == 2) task2();
		else if (n == 3) task3();
		else if (n == 4) task4();
		else if (n == 5) task5();
		else if (n != 0) cout << "Такой задачи нет\n";
	} while (n > 0);
	return 0;
}