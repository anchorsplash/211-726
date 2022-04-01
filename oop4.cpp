#include <iostream>
using namespace std;

void hms_to_secs() {
    char ans = 'y';
    char dummychar;
    int h, m, s;
    long secs;
    while (ans == 'y') {
        cout << "Введите время (в формате 23:59:59): \n";
        cin >> h >> dummychar >> m >> dummychar >> s;
        secs = h * 3600 + m * 60 + s;
        cout << "Время в секундах: " << secs << endl;
        cout << "Желаете продолжить? (y/n)\n";
        cin >> ans;
    }
};

struct time1 {
    int h, m, s;
    long secs;
};

void time_to_secs() {
    time1 t;
    char dummychar;
    cout << "Введите время (в формате 23:59:59): \n";
    cin >> t.h >> dummychar >> t.m >> dummychar >> t.s;
    t.secs = t.h * 3600 + t.m * 60 + t.s;
    cout << "Время в секундах: " << t.secs << endl;
}

void secs_to_time() {
    time1 t;
    cout << "Введите количество секунд: \n";
    cin >> t.secs;
    t.h = t.secs / 3600;
    t.m = (t.secs % 3600) / 60;
    t.s = (t.secs % 3600) % 60;
    cout << t.h << ":" << t.m << ":" << t.s << endl;
};

void task6() {
    int ans;
    cout << "Вы хотите перевести время в секунды или секунды в формат времени? (1/2)\n";
    cin >> ans;
    if (ans == 1) {
        time_to_secs();
    }
    if (ans == 2) {
        secs_to_time();
    }
};

double power(double n, int p) {
    double res = n;
    if (p == 0) {
        return 1;
    }
    else {
        for (int i = 1; i < p; i++) {
            res *= n;
        };
        return res;
    }
};

int power(int n, int p) {
    double res = n;
    if (p == 0) {
        return 1;
    }
    else {
        for (int i = 1; i < p; i++) {
            res *= n;
        };
        return res;
    }
};

long power(long n, int p) {
    double res = n;
    if (p == 0) {
        return 1;
    }
    else {
        for (int i = 1; i < p; i++) {
            res *= n;
        };
        return res;
    }
};

float power(float n, int p) {
    double res = n;
    if (p == 0) {
        return 1;
    }
    else {
        for (int i = 1; i < p; i++) {
            res *= n;
        };
        return res;
    }
};

void task7() {
    int p;
    double n1;
    cout << "Задайте основание степени (тип double)\n";
    cin >> n1;
    cout << "Задайте показатель степени\n";
    cin >> p;
    cout << "Результат возведения: " << power(n1, p) << endl;

    int n2;
    cout << "Задайте основание степени (тип int)\n";
    cin >> n2;
    cout << "Задайте показатель степени\n";
    cin >> p;
    cout << "Результат возведения: " << power(n2, p) << endl;

    long n3;
    cout << "Задайте основание степени (тип long)\n";
    cin >> n3;
    cout << "Задайте показатель степени\n";
    cin >> p;
    cout << "Результат возведения: " << power(n3, p) << endl;

    float n4;
    cout << "Задайте основание степени (тип float)\n";
    cin >> n4;
    cout << "Задайте показатель степени\n";
    cin >> p;
    cout << "Результат возведения: " << power(n4, p) << endl;
};

int swap(int a, int b) {
    
}


int main() {
    setlocale(LC_ALL, "rus");
    int k = -1;
    int n;
    while (k != 0) {
        cout << "\nВыберите задание (5-12). Выберите 0 для выхода из программы.\n";
        cin >> n;
        switch (n) {
        case 0:
            cout << "Выходим из программы...\n";
            k = 0;
            break;
        case 5:
            hms_to_secs();
            break;
        case 6:
            task6();
            break;
        case 7:
            task7();
            break;
        }
    }
}


