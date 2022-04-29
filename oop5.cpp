#include <iostream>
#include <iomanip>
using namespace std;

class Employee {
public:
    int num;
    float ben;
};

void task4() {
    Employee first, second;
    cout << "Введите номер и пособие первого работника \n";
    cin >> first.num >> first.ben;
    cout << "Введите номер и пособие второго работника \n";
    cin >> second.num >> second.ben;
    cout << setiosflags(ios::left) << "Работник с номером " << first.num << setw(18) << ". Его пособие равно " << first.ben << "." << endl
        << "Работник с номером " << second.num << setw(18) << ". Его пособие равно " << second.ben << "." << endl;
};

class Date {
public: 
    int month, day, year;

    void getdate() {
        char ch;
        cin >> month >> ch >> day >> ch >> year;
    };

    void showdate() {
        cout << month << "/" << day << "/" << year;
    }
};

void task5() {int month, day, year;

    Date dat;
    cout << "Введите дату в формате (m/d/y)\n";
    dat.getdate();
    cout << "Ваша дата: ";
    dat.showdate();
    cout << " " << endl;
};

enum Etype {
    LABORER,
    SECRETARY,
    MANAGER,
    ACCOUNTANT,
    EXECUTIVE,
    RESEARCHER
};

class Date2 {
public:
    int month, day, year;
};

class Employee2 {
private:
    int num;
    float ben;
public:
    Etype pos;
    Date2 dat;

    void getemploy() {
        char ch;
        cout << "\nВведите номер и пособие сотрудника\n";
        cin >> num >> ben;
        cout << "\nВведите дату принятия сотрудника на работу в формате (m/d/y)\n";
        cin >> dat.month >> ch >> dat.day >> ch >> dat.year;
        char ans;
        cout << "\nВведите первую букву должности (laborer, secretary, manager, accountant, executive, researcher) | ";
        cin >> ans;
        switch (ans) {
        case 'l':
            pos = LABORER;
            break;
        case 's':
            pos = SECRETARY;
            break;
        case 'm':
            pos = MANAGER;
            break;
        case 'a':
            pos = ACCOUNTANT;
            break;
        case 'e':
            pos = EXECUTIVE;
            break;
        case 'r':
            pos = RESEARCHER;
            break;
        }
    };

    void putemploy() {
        cout << "\nНомер сотрудника — " << num << ". Пособие — " << ben << "." << endl
            << "Дата приема на работу — " << dat.month << "/" << dat.day << "/" << dat.year << ".";
        switch (pos) {
        case LABORER:
            cout << "Должность — LABORER";
            break;
        case SECRETARY:
            cout << "Должность — SECRETARY";
            break;
        case MANAGER:
            cout << "Должность — MANAGER";
            break;
        case ACCOUNTANT:
            cout << "Должность — ACCOUNTANT";
            break;
        case EXECUTIVE:
            cout << "Должность — EXECUTIVE";
            break;
        case RESEARCHER:
            cout << "Должность — RESEARCHER";
            break;
        };
    };
};

void task6() {
    Employee2 emp;
    emp.getemploy();
    emp.putemploy();
};

class Angle {
private:
    int deg;
    float min;
    char dir;

public:
    Angle() {
    F:
        cout << "Введите градусы: ";
        cin >> deg;
        cout << "Введите минуты: ";
        cin >> min;
        cout << "Введите направление: ";
        cin >> dir;
        if (min > 60) {
            deg = deg + (min / 60);
            while (min > 60) {
                min = min - 60;
            };
        };
        if ((dir == 'N' || dir == 'S') && ((deg > 90) || (deg == 90 && min > 0))) {
            cout << "Широта принимает значения от 0 до 90 градусов. Введите значение заново.\n\n";
            goto F;
        }
        if ((dir == 'E' || dir == 'W') && ((deg > 180) || (deg == 180 && min > 0))) {
            cout << "Долгота принимает значения от 0 до 180 градусов. Введите значение заново.\n\n";
            goto F;
        }
    }

    Angle(int a, float b, char c) {
        deg = a;
        min = b;
        dir = c;
    };

    void enter() {
        F:
        cout << "Введите градусы: ";
        cin >> deg;
        cout << "Введите минуты: ";
        cin >> min;
        cout << "Введите направление: ";
        cin >> dir;
        if (min > 60) {
            deg = deg + (min / 60);
            while (min > 60) {
                min = min - 60;
            };
        };
        if ((dir == 'N' || dir == 'S') && ((deg > 90) || (deg == 90 && min > 0))) {
            cout << "Широта принимает значения от 0 до 90 градусов. Введите значение заново.\n\n";
            goto F;
        }
        if ((dir == 'E' || dir == 'W') && ((deg > 180) || (deg == 180 && min > 0))) {
            cout << "Долгота принимает значения от 0 до 180 градусов. Введите значение заново.\n\n";
            goto F;
        }
    };


    void show() {
        cout << "Координаты: " << deg << "°" << min << "' " << dir << endl;
    };
};

void mainQ() {
    char ans = 'y';
    while (ans == 'y') {
        Angle p1{ 91, 0, 'N' };
        p1.enter();
        p1.show();
        Angle p2{ 181, 0, 'E' };
        p2.enter();
        p2.show();
        cout << "Ввести новые координаты? (y or n)\n";
        cin >> ans;
    }
};



class Number {
private:
    int num;
    static int count;

public:
    Number() {
        count++;
        num = count;
    }

    void shownum() {
        cout << "Порядковый номер объекта — " << num << endl;
    }
};

int Number::count = 0;

void task8() {
    Number obj1, obj2, obj3;
    obj1.shownum();
    obj2.shownum();
    obj3.shownum();
};

class Fraction {
public:
    int a, b;

    void getfr() {
        char ch;
        cout << "Задайте числитель и знаменатель (в формате a/b) : ";
        cin >> a >> ch >> b;
    }

    void addition(Fraction a, Fraction b) {
        Fraction ans;
        ans.a = a.a * b.b + a.b * b.a;
        ans.b = a.b * b.b;
        cout << "Сумма дробей равна " << ans.a << "/" << ans.b << endl;
    }
};

void task9() {
    char ans = 'y';
    while (ans == 'y') {
        Fraction fr1, fr2;
        fr1.getfr();
        fr2.getfr();
        fr1.addition(fr1, fr2);
        cout << "Ввести новые слагаемые? (y or n) : ";
        cin >> ans;
    }
};

class Ship {
private:
    Number num;
    Angle x;
    Angle y;

public:
    Ship() {
        int l = 1;
    };

    void getinfo() {
        cout << "Введите координаты корабля\n";
        x.enter();
        y.enter();
    };

    void showinfo() {
        cout << "Номер корабля: ";
        num.shownum();
        cout << "Коодинаты: ";
        x.show();
        y.show();
    };
};

void task10() {
    Ship boat1, boat2, boat3;
    boat1.getinfo();
    boat2.getinfo();
    boat3.getinfo();
};

void task11() {

};

void task12() {

};

int main()
{
    setlocale(LC_ALL, "rus");
    int k = -1;
    int n;
    while (k != 0) {
        cout << "\nВыберите задание (4-12). Выберите 0 для выхода из программы.\n";
        cin >> n;
        switch (n) {
        case 0:
            cout << "Выходим из программы...\n";
            k = 0;
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        case 6:
            task6();
            break;
        case 7:
            mainQ();
            break;
        case 8:
            task8();
            break;
        case 9:
            task9();
            break;
        case 10:
            task10();
            break;
        case 11:
            task11();
            break;
        case 12:
            task12();
            break;
        }
    }
};
