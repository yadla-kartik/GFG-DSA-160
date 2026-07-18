// ---------- Problem Link -----------
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/minimize-the-heights3351

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getMinDiff(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end());

        int ans = nums[nums.size() - 1] - nums[0];

        int sm = nums[0] + k;
        int lg = nums[nums.size() - 1] - k;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - k < 0)
                continue;

            int mini = min(sm, nums[i] - k);
            int maxi = max(lg, nums[i - 1] + k);

            ans = min(ans, maxi - mini);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 5, 8, 10};
    int k = 2;

    cout << obj.getMinDiff(nums, k);

    return 0;
}