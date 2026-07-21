// -------- Problem Link ---------
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/smallest-positive-missing-number-1587115621

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int> &arr) {
        sort(arr.begin(), arr.end());

        int cnt = 1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < cnt) {
                continue;
            }
            if (arr[i] == cnt) {
                cnt++;
            }
            else if (arr[i] > cnt) {
                return cnt;
            }
        }
        return cnt;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {2, -3, 4, 1, 1, 7};

    cout << obj.missingNumber(arr);

    return 0;
}