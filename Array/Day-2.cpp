#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void pushZerosToEnd(vector<int>& arr) {
        int count = 0;

        for(int i = 0; i < arr.size(); i++) {
            if (arr[i] != 0) {
                arr[count++] = arr[i];
            }
        }

        while(count < arr.size()) {
            arr[count++] = 0;
        }
    }
};

int main() {
    Solution obj;

    vector<int> arr1 = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    obj.pushZerosToEnd(arr1);
    cout << "Example 1 Output: ";
    for (int x : arr1) cout << x << " ";
    cout << endl;

    vector<int> arr2 = {1, 2, 3, 0, 0, 0, 4, 5};
    obj.pushZerosToEnd(arr2);
    cout << "Example 2 Output: ";
    for (int x : arr2) cout << x << " ";
    cout << endl;

    vector<int> arr3 = {0, 0, 0, 1, 2, 3};
    obj.pushZerosToEnd(arr3);
    cout << "Example 3 Output: ";
    for (int x : arr3) cout << x << " ";
    cout << endl;

    vector<int> arr4 = {1, 2, 3, 4, 5};
    obj.pushZerosToEnd(arr4);
    cout << "Example 4 Output: ";
    for (int x : arr4) cout << x << " ";
    cout << endl;

    return 0;
}
