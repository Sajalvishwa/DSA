#include <iostream>
#include <climits>
using namespace std;

int maxProfit(int prices[], int n) {

    int minPrice = prices[0];
    cout << "Initial MinPrice = " << minPrice << endl;
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {

        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }

        cout << "i = " << i
             << "  Price = " << prices[i]
             << "  MinPrice = " << minPrice
             << "  Profit = " << profit
             << "  MaxProfit = " << maxProfit
             << endl;
    }

    return maxProfit;
}

int main() {

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    cout << "\nMaximum Profit = " << maxProfit(prices, n);

    return 0;
}