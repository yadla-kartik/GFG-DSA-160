#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int> &arr) {
        int st = 0;
        int end = arr.size() - 1;
        
        while (st <= end) {
            int temp = arr[st];
            arr[st] = arr[end];
            arr[end] = temp;
            st++;
            end--;
        }
    }
};

int main() {
    Solution sol;
    
    vector<int> arr1 = {1, 2, 3, 4, 5};
    sol.reverseArray(arr1);
    cout << "Reversed Array 1: ";
    for (int num : arr1) cout << num << " ";
    cout << endl;
    
    vector<int> arr2 = {10, 20, 30, 40};
    sol.reverseArray(arr2);
    cout << "Reversed Array 2: ";
    for (int num : arr2) cout << num << " ";
    cout << endl;

    vector<int> arr3 = {99};
    sol.reverseArray(arr3);
    cout << "Reversed Array 3: ";
    for (int num : arr3) cout << num << " ";
    cout << endl;

    vector<int> arr4 = {2, 4, 6, 8, 10, 12};
    sol.reverseArray(arr4);
    cout << "Reversed Array 4: ";
    for (int num : arr4) cout << num << " ";
    cout << endl;

    vector<int> arr5 = {1, 2, 3, 2, 1};
    sol.reverseArray(arr5);
    cout << "Reversed Array 5: ";
    for (int num : arr5) cout << num << " ";
    cout << endl;

    return 0;
}
