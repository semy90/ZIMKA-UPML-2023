#include <iostream> //подключение библиотеки ввода вывода данных
#include <iomanip> //подключение библиотеки для маниупляций с вводом и выводом данных
#include <cmath> //подключение библеотеки для работы с матемматическими функциями

using namespace std; // подключение стандартного пространства имен

int main() { //главная функция
    // ниже идут объявления переменных разных типов
    int n1; //выделено 4байта памяти(принимает числа в диапозоне от -2^31 до 2^31-1)
    //long long - выделяется 8байт памяти(принимает числа в диапозоне от -2^63 до 2^63-1)
    // short - выделяется 2байта памяти(принимает числа в диапозоне от -2^15 до 2^15-1)

    float n2;//выделяется 4 байта памяти
    //double выделяется 8 байт памяти

    bool flag = true; //выделяется 1 байт памяти(принимает только 0 и 1)

    int array[5];// это упорядочанный массив данных(в нашем случае int)
    //о массивах подробнее будет дальше

    cin >> n1 >> n2; //ввод данных с "клавиатуры"

    float nfloor = floor(n2), nceil = ceil(n2);
    //floor() или же floorf() округляет наше число в меньшую сторону(в пол, поэтому и такое название)
    //ceil() или же ceilf() округляет наше число в бОльшую сторону(в потолок, поэтому и такое назввание)

    cout << n1; // вывод данных
    //для того чтобы вывести число с определенной точностью нужна библеотека <iomanip>
    cout << fixed << setprecision(4) << n2;
    //setprecision устонавливает точность с которой мы будем выводить наше число
    // fixed нужно для того чтоб не было приколов с выводом(посмотрите сами что будет если  не вписать fixed)

    cout << boolalpha << flag;
    //для того чтобы вывести булевую переменную (true/false) нужно вписать boolapha
    //иначе мы просто получим в вывод 0 или 1

}