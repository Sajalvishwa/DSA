#include<iostream>
#include<climits>
using namespace std;

void MaxSubArraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        for (int j = i; j < n; j++) {
            currentSum += arr[j];
            maxSum = max(maxSum, currentSum);
        }
    }
    cout << "Maximum subarray sum is: " << maxSum << endl;
}

int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    MaxSubArraySum(arr, n);
    return 0;
}