#include <iostream>
using namespace std;

int main()
{
    //1
    setlocale(LC_ALL, "rus");
    float ang;
    cout << "1. ";
    do {
        cout << "Задайте значение угла в градусах (от 0 до 360)\n";
        cin >> ang;
    } while ((ang <= 0) or (ang >= 360));
    float rad = ang / 180;
    cout << "Угол в радианах равен " << rad << "П " << "\n\n";

    //2
    float rad1;
    cout << "2. ";
    do {
        cout << "Задайте значение угла в радианах (от 0 до 2П)\n";
        cin >> rad1;
    } while ((rad1 <= 0) or (rad1 >= 2));
    float ang1 = rad1 * 180;
    cout << "Угол в градусах равен " << ang1 << " градусов " << endl << endl;

    //3
    float x, a, y;
    cout << "3. Задайте X (вес конфет) и A (стоимость пачки с таким весом)\n";
    cin >> x;
    cin >> a;
    float cost = a / x;
    cout << "Задайте Y\n";
    cin >> y;
    cout << "1 кг и Y кг этих конфет стоят " << cost << " и " << (y*cost) << " соответственно\n\n";

    //4
    float v1, v2, t, s;
    cout << "4. Введите поочередно значения скоростей автомобилей, изначального расстояния между ними\nи времени, за которое они удаляются друг от друга\n";
    cin >> v1;
    cin >> v2;
    cin >> s;
    cin >> t;
    float otv = s + (v1 + v2) * t;
    cout << "Расстояние между автомобилями равно " << otv << endl << endl;

    //5
    cout << "5. ";
    float A;
    do {
        cout << "Задайте коэффициент A\n";
        cin >> A;
    } while (A == 0);
    float B;
    cout << "Введите коэффициент B\n";
    cin >> B;
    cout << "x равен " << (-B / A) << endl << endl;

    //6
    cout << "6.";
    cout << "Система уравнений \nA1·x + B1·y = C1 \nA2·x + B2·y = C2 " << endl;
    float A1, B1, x6, y6, C1, C2, A2, B2, d, d1, d2;
    cout << "Введите коэфицент A1\n";
    cin >> A1;
    cout << "Введите коэфицент B1\n";
    cin >> B1;
    cout << "Введите C1\n";
    cin >> C1;
    cout << "Введите коэфицент A2\n";
    cin >> A2;
    cout << "Введите коэфицент B2\n";
    cin >> B2;
    cout << "Введите C2\n";
    cin >> C2;
    cout << "Решим с помощью формул Крамера" << endl;
    d = A1 * B2 - A2 * B1;
    d1 = C1 * B2 - C2 * B1;
    d2 = A1 * C2 - A2 * C1;
    x6 = d1 / d;
    y6 = d2 / d;
    cout << "Решением системы уравнений являются x = " << x6 << ", y = " << y6 << endl;
}