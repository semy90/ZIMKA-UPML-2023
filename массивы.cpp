#include <iostream>
using namespace std;

//основные алгоритмы с массивами

// заполнение массива
void zapoln_arr(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}
//самая частая ошибка, это заполнение массива и выполнения условия в "цикле заполнения"

//монотонный фрагмент в массиве
void monotonn_frag(){
    int arr[20], len = 1, maxlen = 0;
    for (int i = 0; i < 20; ++i){
        cin >> arr[i];
    }
    for (int i = 1; i < 20; ++i) {
        if(arr[i] > arr[i-1]){
            len++;
            if(len > maxlen) {
                maxlen = len;
            }
        }
        else {
            len = 1;
        }
    }
    cout << maxlen;
}

