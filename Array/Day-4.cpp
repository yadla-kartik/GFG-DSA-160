#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void reversePart(vector<int>& arr, int st, int end){
        while(st < end){
            swap(arr[st], arr[end]);
            st++;
            end--;
        }
    }
    
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        if (n == 0) return;

        d = d % n; 

        // Step 1
        reversePart(arr, 0, d - 1);

        // Step 2
        reversePart(arr, d, n - 1);

        // Step 3
        reversePart(arr, 0, n - 1);
    }
};

int main() {
    Solution obj;

    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;

    cout << "Original Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    obj.rotateArr(arr, d);

    cout << "Rotated Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
