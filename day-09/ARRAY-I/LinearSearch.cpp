#include<iostream>
using namespace std;

int linearSearch(int arr[], int n , int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index: " << i << endl;
            return i;
        }
    }
    
    if(key != arr[n-1]) {
        cout << "Element not found in the array." << endl;
    }
    return -1;
}

int main () {
    int arr[10] = {5, 2, 9, 1, 5, 6, 3, 7, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;

    linearSearch(arr, n, key);
    return 0;
}