#include <iostream>

using namespace std;


// n какое то натуральное число
// примеры циклов
void cycle() {
    int n;

    //цикл с счетчиком
    for (int i = 0; i < n; i++) {
        //тело цикла
    }

    //цикл с условием
    while (n > 0) {
        //тело цикла
    }

    //цикл с постусловием (используют очень редко)
    do {
        //тело цикла
    } while (n > 0)
}

//определенные алгоритмы в циклах

//подсчет максимального числа вводимого с клавиатуры
void max_in_cycle() {
    //n - количество чисел вводимых с клавиатуры
    // n - натуральное число
    int n;
    cin >> n;
    int max = 0, num;
    //num - число вводимое с клавиатуры
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (max < num) max = num;
    }
    cout << max;
}

//работа с интервалом определенных чисел
void cycle_in_interval() {
    //k, m натуральные числа, где k < m
    int k, m;
    cin >> k >> m;
    for (int i = k; i <= m; i++) {
        //какая то работа с определенным числом из этого интервала
        //будь то это посчет по условию или сумма этих чисел
    }
}


//работа с числами если не известно их количество(при помощи цикла while)
void while_num_cycle_metod() {
    int n;
    cin >> n;
    while (n != 0) {
        if (n) {
            //какое то условие
        }
    }
    // cout << что то
}

//реализация через do-while
void do_while_metod() {
    int n;
    do {
        cin >> n;
        //какое то условие
    } while (n != 0);
}


//делители
void del() {
    int n;
    cin >> n;
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0) {
            //какое то действие если i является делителем
        }
    }
}

// проверка на простое число
void check_for_simple() {
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) flag = false;
    }
    if (flag) cout << "Число простое";
    else cout << "Число НЕ простое";
}

//2 алгоритма Евклида(лучше использовать модифицированный)
//обычный алгоритм Евклида
void std_evklid() {
    int a, b;
    cin >> a >> b;
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    int NOD = a;
    cout << NOD;
}

//модифицированный алгоритм Евлкида(более предпочительно использовать)
void mod_evklid() {
    int a, b;
    cin >> a >> b;
    while (a * b > 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    int NOD = a + b;
    cout << NOD;
}

//нахождение 3х max чисел из N
void three_max_from_n() {
    int n, a;
    int max1 = 0, max2 = 0, max3 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a > max1) {
            max3 = max2;
            max2 = max1;
            max1 = a;
        } else {
            if (a > max2) {
                max3 = max2;
                max2 = a;
            } else if (a > max3) {
                max3 = a;
            }
        }
    }
}


// количество max в последовательности натуральных n-чисел
void count_max(){
    int n, count, max = -1, a;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if (a > max){
            max = a;
            count = 1;
        }
        else if(a == max) count++;
    }
    cout << count;
}

//длинна монотонности фрагмента последовательности
void monotonn_frag(){
    int n, len = 0, max = 0, a, prev;
    cin >> n;
    cin >> prev;
    for (int i = 1; i < n; i++){
        cin >> a;
        if (a > prev){
            len++;
            if (len > max) max = len;
        }
        else{
            len = 1;
        }
        prev = a;
    }
    cout << max;
}

