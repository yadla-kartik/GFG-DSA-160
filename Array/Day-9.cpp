//  ------ Problem Link ---------
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/buy-stock-2

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int profit = 0;
        int minprice = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            minprice = min(minprice, prices[i]);
            int currentprofit = prices[i] - minprice;
            profit = max(profit, currentprofit);
        }

        return profit;
    }
};

int main() {
    Solution obj;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << obj.maxProfit(prices);

    return 0;
}