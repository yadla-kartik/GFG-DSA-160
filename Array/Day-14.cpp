// --------- Problem Link ----------
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/max-circular-subarray-sum-1587115620

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxCircularSum(vector<int> &arr) {
        int currmax = arr[0], maxsum = arr[0];
        int currmin = arr[0], minsum = arr[0];

        int total = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            total += arr[i];

            currmax = max(arr[i], currmax + arr[i]);
            maxsum = max(maxsum, currmax);

            currmin = min(arr[i], arr[i] + currmin);
            minsum = min(minsum, currmin);
        }

        if (maxsum < 0)
            return maxsum;

        return max(maxsum, total - minsum);
    }
};

int main() {
    Solution obj;

    vector<int> arr = {8, -8, 9, -9, 10, -11, 12};

    cout << obj.maxCircularSum(arr);

    return 0;
}