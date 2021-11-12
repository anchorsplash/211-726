#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    //1
    int B;
    cout << "1. Введите значение переменной a\n";
    cin >> B;
    int A;
    cout << "Введите значение переменной b\n";
    cin >> A;
    cout << "Теперь значение переменной a равно " << A << ", а переменной b — " << B << endl << endl;

    //2
    int b2;
    cout << "2. Введите значение переменной a\n";
    cin >> b2;
    int c2;
    cout << "Введите значение переменной b\n";
    cin >> c2;
    int a2;
    cout << "Введите значение переменной c\n";
    cin >> a2;
    cout << "Теперь значение переменной a равно " << a2 << ", переменной b — " << b2 << ", a переменной с — " << c2 << endl << endl;

    //3
    int c3;
    cout << "3. Введите значение переменной a\n";
    cin >> c3;
    int a3;
    cout << "Введите значение переменной b\n";
    cin >> a3;
    int b3;
    cout << "Введите значение переменной c\n";
    cin >> b3;
    cout << "Теперь значение переменной a равно " << a3 << ", переменной b — " << b3 << ", a переменной с — " << c3 << endl << endl;

    //4
    float x4;
    cout << "4. Задайте значение x\n";
    cin >> x4;
    double y4 = 3 * (pow(x4, 6)) - 6 * (pow(x4, 2)) - 7;
    cout << "Значение функции равно " << y4 << endl << endl;

    //5
    float x5;
    cout << "5. Задайте значение x\n";
    cin >> x5;
    double y5 = 4 * (pow(x5 - 3, 6)) - 7 * (pow(x5 - 3, 3)) + 2;
    cout << "Значение функции равно " << y5 << endl << endl;

    //6
    float h1;
    cout << "6. Задайте значение А\n";
    cin >> h1;
    float h2;
    h2 = h1 * h1;
    h1 = h2 * h2;
    h2 = h1 * h1;
    cout << "A в восьмой степени равно " << h2 << endl << endl;

    //7
    float he1;
    cout << "7. Задайте значение А\n";
    cin >> he1;
    float he2;
    float he3;
    he2 = he1 * he1 * he1;
    he3 = he2 * he2;
    he2 = he3 * he3 * he2;
    cout << "A в пятнадцатой степени равно " << he2 << endl << endl;
}


