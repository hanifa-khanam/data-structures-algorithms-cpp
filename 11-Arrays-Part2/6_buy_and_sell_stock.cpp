#include <iostream>
using namespace std;

void buySellStock(int *prices, int n) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for(int i=0; i<n; i++) {

        int profit = prices[i] - minPrice;
        maxProfit = max(maxProfit, profit);

        minPrice = min(minPrice, prices[i]);
    }

    cout << "Maximum Profit: " << maxProfit << endl;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);

    buySellStock(prices, n);

    return 0 ;
}