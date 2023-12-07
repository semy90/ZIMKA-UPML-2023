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


//разворот массива(алгоритм работы с симметричными парами)\
void reverse_array(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int L = 0;
    int R = n - 1;
    while (R > L){
        int tmp = arr[L];
        arr[L] = arr[R];
        arr[R] = tmp;
        L++;
        R++;
    }

}

//сдвиг массива влево
void sdig_left(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int tmp = arr[0];
    for (int i = 0; i < n-1; ++i) {
        arr[i] = arr[i+1];
    }
    arr[n-1] = tmp;
    //выводим массив
}

//сдвиг массива с овер большими числами(с использованием доп.массива)
void sdvig_very_big_numbers() {
    int n, k;
    cin >> n;// колво чисел в массиве arr
    cin >> k;// колво чисел в вспомогательном массиве arrtmp
    int arr[n];
    int arrtmp
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < k; ++i) {
        arrtmp[i] = arr[i];
    }

    for (int i = k; i < n; ++i) {
        arr[i - k] = arr[i];
    }
    for (int i = n-k; i < n; ++i) {
        arr[i] = arrtmp[i - n + k];
    }

    //выводим массив
}



