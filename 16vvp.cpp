#include <iostream>
#include <vector>

using namespace std;

void task1(void) {
	cout << "������ �1" << endl;
	int n;
	cout << "������� ����� N: ";
	cin >> n;
	vector <int> mas1;
	for (int i = 1; i < n * 2; i += 2) {
		mas1.push_back(i);
	}
	for (int j = 0; j < n; j++) {
		cout << mas1[j] << " \n";
	}
}


void task2(void) {
	cout << "������ �2" << endl;
	int n, a, d;
	cout << "������� ����� N(> 1): ";
	cin >> n;
	cout << "������� ������ ���� �������������� ���������� A: ";
	cin >> a;
	cout << "������� ����������� �������������� ���������� D: ";
	cin >> d;
	vector <int> mas1;
	for (int i = 0; i < n; i++) {
		mas1.push_back(a * pow(d,i));
	}
	for (int j = 0; j < n; j++) {
		cout << mas1[j] << " \n";
	}
}


void task3(void) {
	cout << "������ �3" << endl;
	int n, a, b, summa;
	cout << "������� ������ ������� N(>2):";
	cin >> n;
	cout << "������� ������ ������� ������������������ A:";
	cin >> a;
	cout << "������� ������ ������� ������������������ B:";
	cin >> b;
	vector <int> mas1;
	mas1.push_back(a);
	mas1.push_back(b);
	summa = mas1[0] + mas1[1];
	for (int i = 2; i < n; i++) {
		mas1.push_back(summa);
		summa += mas1[i];
	}
	for (int j = 0; j < n; j++) {
		cout << mas1[j] << " \n";
	}
}


void task4(void) {
	cout << "������ �4" << endl;
	int n;
	cout << "������� ������ ������� N:";
	cin >> n;
	vector <int> a;
	for (int i = 1; i <= n; i++) {
		a.push_back(i);
	}
	int pos1 = 0;
	int posn = n - 1;
	while (pos1 < posn) {
		cout << a[pos1] << " ";
		cout << a[posn] << " ";
		pos1++;
		posn--;
		if (pos1 == posn) {
			cout << a[pos1];
		}
	}
	cout << endl;
}


void task5(void) {
	cout << "������ �5" << endl;
	int n;
	cout << "������� ������ ������� N:";
	cin >> n;
	vector <int> a;
	for (int i = 1; i <= n; i++) {
		a.push_back(i);
	}
	for (int i = 1; i < n; i += 2) {
		cout << a[i] << " ";
	}
	for (int j = n - 1; j >= 0; j -= 2) {
		if (j % 2 != 0) {
			j--;
		}
		cout << a[j] << " ";
	}
}


int main() {
	setlocale(LC_ALL, "");
	int n;
T1:
	cout << "�������� ������ (1-5):" << endl;
	cout << "��� ������ �� ��������� ������� '0'" << endl;
	cin >> n;
	if (n == 1) task1();
	else if (n == 2) task2();
	else if (n == 3) task3();
	else if (n == 4) task4();
	else if (n == 5) task5();
	else if (n != 0) cout << "����� ������ ���\n";
	else if (n == 0) return 0;
	goto T1;
}