#include<iostream>
using namespace std;

int printarray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main () {
    int arr[10] = {5, 2, 9, 1, 5, 6, 3, 7, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;

    int copyArr[n];
    for(int i = 0; i < n; i++) {
        int j = n - 1 - i;
        copyArr[j] = arr[i];
    }

    for(int i = 0; i < n; i++) {
        arr[i] = copyArr[i];
    }

    printarray(arr, n);
    return 0;
}