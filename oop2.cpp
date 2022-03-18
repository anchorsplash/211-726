#include <iostream>
#include <iomanip>
using namespace std;

void task5() {
    int i, l;
    int c = 0;
    for (i = 1; c < 21; i += 2) {
        cout << setw(21-c);
        for (l = 0; l != i; l += 1) {
            cout << "x";
        }
        cout << endl;
        c += 1;
    }
}

int task6() {
    unsigned int numb;
    unsigned long fact = 1;
    cout << "Введите число: ";
    cin >> numb;
    if (numb == 0) {
        cout << "Выходим из программы...";
        return 0;
    }
    else {
        for (int j = numb; j > 0; j--) {
            fact *= j;
            cout << "Факториал равен " << fact << endl;
        }
    }
}

void task7() {
    int y;
    float o, p, s;
    cout << "Введите начальный вклад: ";
    cin >> s;
    cout << "Введите число лет: ";
    cin >> y;
    cout << "Введите процентную ставку: ";
    cin >> p;
    for (int i = 0; i < y; i++) {
        s += s * (p / 100);
    }
    cout << "Через " << y << " лет вы получите " << s << " долларов" << endl;

}

void task8() {
    int f1, sh1, p1, f2, sh2, p2, f, sh, p;
    cout << "Введите первую сумму: ";
    cin >> f1 >> sh1 >> p1;
    cout << "Введите вторую сумму: ";
    cin >> f2 >> sh2 >> p2;
    f = f1 + f2 + (((sh1 + sh2)*12 + p1 + p2)) / 20;
    sh = (((sh1 + sh2) * 12 + p1 + p2)) / 12;
    p = (((sh1 + sh2) * 12 + p1 + p2)) % 12;

}

int main() {
    setlocale(LC_ALL, "rus");
    int n = 0;
    int k = -1;
    while (k != 0) {
        cin >> n;
        if (n == 0) {
            cout << "Выход из программы...";
            k = 0;
        }
        if (n == 5) {
            task5();
            cout << endl;
        }
        if (n == 6) {
            task6();
            cout << endl;
        }
        if (n == 7) {
            task7();
            cout << endl;
        }
        if (n == 8) {
            task8();
            cout << endl;
        }
    }
}
