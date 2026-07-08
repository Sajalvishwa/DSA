#include<iostream>
using namespace std;

int maxProfit(int prices[], int n){

    int profit = 0;

    for(int i = 1; i < n; i++){

        if(prices[i] > prices[i-1]){
            cout << "Buy at: " << prices[i-1] << "  Sell at: " << prices[i] << endl;
            int diff = prices[i] - prices[i-1];
            cout << "Profit = " << diff << endl;
            profit += diff;
            cout << "Total Profit = " << profit << endl;

           
        }
    }

    return profit;
}

int main(){

    int prices[] = {7,1,5,3,6,4}
    ;

    int n = sizeof(prices)/sizeof(prices[0]);

    cout << "\nFinal Profit = " << maxProfit(prices,n);

}