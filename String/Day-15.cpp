// Problem Link: https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/anagram-1587115620

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool areAnagrams(string& s1, string& s2) {

        if (s1.length() != s2.length())
            return false;

        vector<int> freq(26, 0);

        for (int x : s1) {
            freq[x - 'a']++;
        }

        for (int y : s2) {
            freq[y - 'a']--;
            if (freq[y - 'a'] < 0)
                return false;
        }

        for (int n : freq) {
            if (n != 0)
                return false;
        }

        return true;
    }
};

int main() {
    Solution obj;

    string s1 = "listen";
    string s2 = "silent";

    cout << obj.areAnagrams(s1, s2);

    return 0;
}