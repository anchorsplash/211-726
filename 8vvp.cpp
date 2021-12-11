#include <iostream>
using namespace std;

int main()
{
    //1
    setlocale(LC_ALL, "rus");
    int byte, kb;
    cout << "1. Задайте размер файла в байтах\n";
    cin >> byte;
    kb = byte / 1024;
    cout << "Данный файл занимает " << kb << " килобайтов и " << byte - kb * 1024 << " байтов\n\n";
    
    //2
    float A, B;
    cout << "2. Задайте числа A и B\n";
    cin >> A;
    cin >> B;
    int otv2 = A / B;
    cout << "На отрезке А может быть размещено " << otv2 << " отрезков B\n\n";

    //3
    float A3, B3;
    cout << "3. Задайте числа A и B\n";
    cin >> A3;
    cin >> B3;
    int otv3 = A3 / B3;
    cout << "Незанятая часть отрезка А равна " << A3 - B3 * otv3 << endl << endl;

    //4
    int ch;
    cout << "4. Введите двузначное число\n";
    cin >> ch;
    int otv4 = (ch % 10) * 10 + ch / 10;
    cout << "Число, полученное при перестановке, равно " << otv4 << endl << endl;

    //5 
    int ch5;
    cout << "5. Введите трехзначное число\n";
    cin >> ch5;
    int otv5 = (ch5 % 100)*10 + ch5 / 100;
    cout << "Число, полученное при перестановке, равно " << otv5 << endl << endl;
}
