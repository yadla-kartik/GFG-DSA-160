#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 1, 2, 1, 3};

    int n = arr.size();
    int fl = n / 3;

    vector<int> ans;
    unordered_map<int, int> freq;

    for (int val : arr) {
        freq[val]++;
    }

    for (auto val : freq) {
        if (val.second > fl) {
            ans.push_back(val.first);
        }
    }

    sort(ans.begin(), ans.end());

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}
