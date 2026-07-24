// Problem Link -- https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/non-repeating-character-1587115620

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    char nonRepeatingChar(string &s) {
        unordered_map<char, int> mp;

        for (char x : s) {
            mp[x]++;
        }

        for (char ch : s) {
            if (mp[ch] == 1) {
                return ch;
            }
        }

        return '$';
    }
};

int main() {
    Solution obj;

    string s = "aabcbcde";

    cout << obj.nonRepeatingChar(s);

    return 0;
}