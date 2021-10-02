// terekhov4lab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
    using namespace std;
    // 1
    setlocale(LC_ALL, "rus");
    cout << "1. Пусть стороны равны\n";
    int a = 2;
    int b = 3;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Тогда:\n";
    int S = a * b;
    int P = 2 * (a + b);
    cout << "S = " << S << endl;
    cout << "P = " << P << endl << endl;

    //2
    cout << "2. Пусть диаметр равен ";
    float d = 4;
    float p = 3.14;
    float L = p * d;
    cout << d << endl;
    cout << "Тогда ее длина равна " << L << endl << endl;

    //3
    int a3 = 2;
    int b3 = 3;
    float sr = (a3 + b3) / 2;
    cout << "3. Пусть a и b равны " << a3 << " и " << b3 << " соответственно" << endl ;
    cout << "Тогда их среднее арифметическое равно " << sr << endl << endl ;

    //4
    cout << "4. Даны числа " << a3 << " и " << b3 << endl;
    int sum = a3 + b3;
    int razn = a3 - b3;
    int proiz = a3 * b3;
    float chast = a3 / b3;
    cout << "Сумма равна " << sum << endl << "Разность равна " << razn << endl << "Произведение равно " << proiz << endl << "Частное равно " << chast << endl << endl;

    //5
    int a5 = -5;
    int b5 = 4;
    cout << "5. Даны числа " << a5 << " и " << b5 << endl;
    int sum5 = abs(a5) + abs(b5);
    int razn5 = abs(a5) - abs(b5);
    int proiz5 = abs(a5) * abs(b5);
    float chast5 = abs(a5) / abs(b5);
    cout << "Сумма их модулей равна " << sum5 << endl << "Разность их модулей равна " << razn5 << endl << "Произведение их модулей равно " << proiz5 << endl << "Частное их модулей равно " << chast5 << endl;
}