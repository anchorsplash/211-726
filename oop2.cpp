#include <iostream>
#include <iomanip>
using namespace std;

void task5() {
    int i, l;
    int c = 0;
    for (i = 1; c < 21; i+=2) {
        cout << setw(21 - c);
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
    int y, o;
    cout << "Введите начальный вклад: ";
    cout << "Введите число лет: ";
    cout << "Введите процентную ставку";
    cout << "Через " << y << "лет вы получите" << o << "";

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
    }
}