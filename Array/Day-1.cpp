#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        
        if (arr.size() < 2) return -1;
       
        int largest = INT_MIN;
        int secondLargest = INT_MIN;
       
        for (int val : arr) {
            if (val > largest) {
                secondLargest = largest;
                largest = val;
            } 
            else if (val < largest && val > secondLargest) {
                secondLargest = val;
            }
        }
       
        if (secondLargest == INT_MIN)
            return -1;
       
        return secondLargest;
    }
};

int main() {
    Solution s;
    
    vector<int> arr1 = {12, 35, 1, 10, 34, 1};
    vector<int> arr2 = {10, 10, 10};
    vector<int> arr3 = {5, 4, 3, 2, 1};
    vector<int> arr4 = {1};
    vector<int> arr5 = {-5, -2, -3, -1};

    cout << "Array 1: Second Largest = " << s.getSecondLargest(arr1) << endl;
    cout << "Array 2: Second Largest = " << s.getSecondLargest(arr2) << endl;
    cout << "Array 3: Second Largest = " << s.getSecondLargest(arr3) << endl;
    cout << "Array 4: Second Largest = " << s.getSecondLargest(arr4) << endl;
    cout << "Array 5: Second Largest = " << s.getSecondLargest(arr5) << endl;

    return 0;
}
