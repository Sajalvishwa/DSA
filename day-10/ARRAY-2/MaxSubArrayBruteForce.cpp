#include<iostream>
#include <climits>
using namespace std;

void MaxSubArraySum(int arr[], int n) {
    int maxSum = INT_MIN;
      for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int currentSum = 0;
            for (int k = i; k <= j; k++) {
                
                currentSum = currentSum + arr[k];
            }
            cout << currentSum << endl;
            maxSum = max(maxSum, currentSum);
        }
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl;
  
}

int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    MaxSubArraySum(arr, n);
    return 0;
}