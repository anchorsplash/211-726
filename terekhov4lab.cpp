// terekhov4lab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
    using namespace std;
    // 1
    setlocale(LC_ALL, "rus");
    float a;
    cout << "1. Задайте сторону a \n";
    cin >> a;
    float b;
    cout << "Задайте сторону b \n";
    cin >> b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Тогда:\n";
    int S = a * b;
    int P = 2 * (a + b);
    cout << "S = " << S << endl;
    cout << "P = " << P << endl << endl;

    //2
    float d;
    cout << "2. Задайте диаметр d \n";
    cin >> d;
    float p = 3.14;
    float L = p * d;
    cout << "Тогда ее длина равна " << L << endl << endl;

    //3
    float a3;
    cout << "3. Задайте число a \n";
    cin >> a3;
    float b3;
    cout << "Задайте число b \n";
    cin >> b3;
    float sr = (a3 + b3) / 2;
    cout << "Тогда их среднее арифметическое равно " << sr << endl << endl ;

    //4
    float a4;
    cout << "4. Задайте число a \n";
    cin >> a4;
    float b4;
    cout << "Задайте число b \n";
    cin >> b4;
    float sum4 = a4 + b4;
    float razn4 = a4 - b4;
    float proiz4 = a4 * b4;
    float chast4 = a4 / b4;
    cout << "Сумма равна " << sum4 << endl << "Разность равна " << razn4 << endl << "Произведение равно " << proiz4 << endl << "Частное равно " << chast4 << endl << endl;

    //5
    float a5;
    cout << "5. Задайте число a \n";
    cin >> a5;
    float b5;
    cout << "Задайте число b \n";
    cin >> b5;
    float sum5 = abs(a5) + abs(b5);
    float razn5 = abs(a5) - abs(b5);
    float proiz5 = abs(a5) * abs(b5);
    float chast5 = abs(a5) / abs(b5);
    cout << "Сумма их модулей равна " << sum5 << endl << "Разность их модулей равна " << razn5 << endl << "Произведение их модулей равно " << proiz5 << endl << "Частное их модулей равно " << chast5 << endl;
}