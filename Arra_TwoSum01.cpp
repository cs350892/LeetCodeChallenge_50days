#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (target == nums[i] + nums[j]) {
                res.push_back(i);
                res.push_back(j);
            }
        }
    }
    return res;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}

