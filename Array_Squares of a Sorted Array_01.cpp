#include <iostream>
#include <algorithm>

using namespace std;

void sortedSquares(int nums[], int n, int res[]) {
    for (int i = 0; i < n; i++) {
        res[i] = nums[i] * nums[i];
    }
    sort(res, res + n);
}

int main() {
    int nums[] = {-4, -1, 0, 3, 10}; // Example input
    int n = sizeof(nums) / sizeof(nums[0]);
    int res[n];

    sortedSquares(nums, n, res);

    cout << "Sorted Squares: ";
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}

