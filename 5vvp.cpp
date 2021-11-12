// 5vvp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    //1
    setlocale(LC_ALL, "rus");
    int x1;
    cout << "1. Задайте x первой точки.\n";
    cin >> x1;
    int y1;
    cout << "Задайте y первой точки.\n";
    cin >> y1;
    int x2;
    cout << "Задайте x второй точки.\n";
    cin >> x2;
    int y2;
    cout << "Задайте y второй точки.\n";
    cin >> y2;
    int linex = abs(x1 - x2);
    int liney = abs(y1 - y2);
    float otvet1 = sqrt(pow(linex, 2) + pow(liney, 2));
    cout << "Расстояние между точками равно " << otvet1 << endl << endl;


    //2 //A
    int A;
    cout << "2. Задайте значение точки A на числовой оси.\n";
    cin >> A;
    int B;
    cout << "Задайте значение точки B на числовой оси.\n";
    cin >> B;
    int C;
    cout << "Задайте значение точки C на числовой оси..\n";
    cin >> C;
    int otvet21 = abs(A - C);
    int otvet22 = abs(B - C);
    float otvet23 = otvet21 + otvet22;
    cout << "Длина отрезка AC равна " << otvet21 << endl;
    cout << "Длина отрезка BC равна " << otvet22 << endl;
    cout << "Сумма отрезков равна " << otvet23 << endl << endl;

    //3
    int A3;
    cout << "3. Задайте значение точки A на числовой оси.\n";
    cin >> A3;
    int B3;
    cout << "Задайте значение точки B на числовой оси.\n";
    cin >> B3;
    int C3;
    do {
        cout << "Задайте значение точки C на числовой оси, учитывая, что точка C расположена между A и B.\n";
        cin >> C3;
    } while (((C3 < A3) && (C3 < B3)) || ((A3 < C3) && (B3 < C3)));
    int otvet3 = abs(A3 - C3) * abs(B3 - C3);
    cout << "Произведение длин AC и BC равно " << otvet3 << endl << endl;

    //4
    int x41;
    cout << "4. Задайте x первой точки.\n";
    cin >> x41;
    int y41;
    cout << "Задайте y первой точки.\n";
    cin >> y41;
    int x42;
    cout << "Задайте x второй точки.\n";
    cin >> x42;
    int y42;
    cout << "Задайте y второй точки.\n";
    cin >> y42;
    int gor = abs(x41 - x42);
    int vert = abs(y41 - y42);
    int otvet41 = gor * 2 + vert * 2;
    int otvet42 = gor * vert;
    cout << "Периметр прямоугольника равен " << otvet41 << ", а площадь " << otvet42 << endl << endl;

    //5
    int x51;
    cout << "5. Задайте x первой точки.\n";
    cin >> x51;
    int y51;
    cout << "Задайте y первой точки.\n";
    cin >> y51;
    int x52;
    cout << "Задайте x второй точки.\n";
    cin >> x52;
    int y52;
    cout << "Задайте y второй точки.\n";
    cin >> y52;
    int x53;
    cout << "Задайте x третьей точки.\n";
    cin >> x53;
    int y53;
    cout << "Задайте y третьей точки.\n";
    cin >> y53;
    int linexAB = abs(x51 - x52);
    int lineyAB = abs(y51 - y52);
    float storAB = sqrt(pow(linexAB, 2) + pow(lineyAB, 2));
    int linexBC = abs(x52 - x53);
    int lineyBC = abs(y52 - y53);
    float storBC = sqrt(pow(linexBC, 2) + pow(lineyBC, 2));
    int linexAC = abs(x53 - x51);
    int lineyAC = abs(y53 - y51);
    double storAC = sqrt(pow(linexAC, 2) + pow(lineyAC, 2));
    double P = storAB + storBC + storAC;
    float S = sqrt((P / 2) * ((P / 2) - storAB) * ((P / 2) - storBC) * ((P / 2) - storAC));
    if (S > 0) {
        cout << "Периметр треугольника равен " << P << ", а площадь " << S << endl << endl;
    }
    else {
        cout << "Такого треугольника не существует.\n";
    }
}
