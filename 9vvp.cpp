#include <iostream>
using namespace std;

int main()
{
    //1
    setlocale(LC_ALL, "rus");
    int t;
    cout << "1. Введите кол-во секунд\n";
    cin >> t;
    cout << "С последней минуты прошло " << t%60 << " секунд\n\n";

    //2
    int k;
    cout << "2. Введите K (номер дня в году)\n";
    cin >> k;
    int otv = k % 7;
    cout << "День недели k-того дня — ";
    if (otv == 0) {
        cout << "воскресенье!\n\n";
    }
    if (otv == 1) {
        cout << "понедельник!\n\n";
    }
    if (otv == 2) {
        cout << "вторник!\n\n";
    }
    if (otv == 3) {
        cout << "среда!\n\n";
    }
    if (otv == 4) {
        cout << "четверг!\n\n";
    }
    if (otv == 5) {
        cout << "пятница!\n\n";
    }
    if (otv == 6) {
        cout << "суббота!\n\n";
    }

    //3
    int K, N;
    cout << "3. Введите K (номер дня в году) и N (номер дня недели первого дня в году)\n";
    cin >> K;
    cin >> N;
    int otv3 = ((K % 7) + N-1)%7;
    cout << "День недели k-того дня — ";
    if (otv3 == 0) {
        cout << "воскресенье!\n\n";
    }
    if (otv3 == 1) {
        cout << "понедельник!\n\n";
    }
    if (otv3 == 2) {
        cout << "вторник!\n\n";
    }
    if (otv3 == 3) {
        cout << "среда!\n\n";
    }
    if (otv3 == 4) {
        cout << "четверг!\n\n";
    }
    if (otv3 == 5) {
        cout << "пятница!\n\n";
    }
    if (otv3 == 6) {
        cout << "суббота!\n\n";
    }

    //4
    int A, B, C, a, b;
    cout << "4. Задайте A, B и C\n";
    cin >> A;
    cin >> B;
    cin >> C;
    a = (A / C) * C;
    b = (B / C) * C;
    cout << "Количество размещенных квадратов равно " << (a * b) / (C * C) << ",\na площадь незанятой части прямоугольника равна " << A * B - a * b << endl << endl;

    //5
    int y, otv5;
    cout << "5. Введите номер года\n";
    cin >> y;
    otv5 = y / 100;
    if (y % 100 > 0) {
        otv5++;
    };
    cout << "Соответствующий номер столетия — " << otv5 << "!\n\n";

}
