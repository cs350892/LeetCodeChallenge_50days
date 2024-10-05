#include <iostream>

using namespace std;

void runningSum(int nums[], int n, int res[]) {
    res[0] = nums[0];
    int sum = nums[0];

    for (int i = 1; i < n; i++) {
        sum += nums[i];
        res[i] = sum;
    }
}

int main() {
    int nums[] = {1, 2, 3, 4}; // Example input
    int n = sizeof(nums) / sizeof(nums[0]);
    int res[n];

    runningSum(nums, n, res);

    cout << "Running Sum: ";
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}

