// --------- Problem Link -----------
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/kadanes-algorithm-1587115620

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubarraySum(vector<int> &arr) {
        int ans = INT_MIN;
        int sum = 0;

        for (int val : arr) {
            sum += val;
            ans = max(sum, ans);

            if (sum < 0)
                sum = 0;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};

    cout << obj.maxSubarraySum(arr);

    return 0;
}