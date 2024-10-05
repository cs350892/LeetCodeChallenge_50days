#include <iostream>

using namespace std;

int maxProfit(int prices[], int size) {
    if (size == 0) return 0;

    int min = prices[0];
    int max = 0;

    for (int i = 1; i < size; i++) {
        if (prices[i] < min) {
            min = prices[i];
        } else {
            int profit = prices[i] - min;
            if (profit > max) {
                max = profit;
            }
        }
    }
    return max;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4}; // Example input
    int size = sizeof(prices) / sizeof(prices[0]);
    int result = maxProfit(prices, size);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}

