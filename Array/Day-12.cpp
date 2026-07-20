#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int> &arr) {
        int maxi = arr[0], mini = arr[0], ans = arr[0];

        for (int i = 1; i < arr.size(); i++) {

            if (arr[i] < 0)
                swap(maxi, mini);

            maxi = max(arr[i], maxi * arr[i]);
            mini = min(arr[i], mini * arr[i]);
            ans = max(ans, maxi);
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {2, 3, -2, 4};

    cout << obj.maxProduct(arr);

    return 0;
}