#include <iostream>

using namespace std;
void checkForChet(){
    int n;
    if (n % 2 == 0){
        cout << "Четное";
    }
    else{
        cout << "Нечетное";
    }
}

//максимальное из двух и более
void max_from_two_and_more(){
    int n1,n2,n3; //и тд
    cin >> n1 >> n2 >> n3;
    int max = n1;
    if (max < n2) max = n2;
    if (max < n3) max = n3;
    //..... и тд
    cout << max;
}
//работа с цифрами нашего числа
//чтобы узнать последнюю цифру числа нужно взять остаток при делении на 10
//пример кода ниже:
void last_digit(){
    int n;
    cin >> n;
    int last_digit = n % 10;
    int second_digit = n / 10 % 10 // чтобы узнать число на определенном порядке нужно n нацело поделить на 10 в степени индекса этого числа
    //то есть формула выглядит так:
    //n = 10 ^ индекс числа % 10
}


//switch-case оператор пример
void switch_case_operator(){
    switch (n) {
        case 1:
            //что то делает если n == 1
        case 2:
            //что то делает если n == 2
            //...
        default:
            //условие если не подошли все кейсы которые выше
    }
}