//  --------- Problem Link ------------
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/stock-buy-and-sell2615

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            cout << "i = " << i
                 << ", prices[" << i - 1 << "] = " << prices[i - 1]
                 << ", prices[" << i << "] = " << prices[i];

            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
                cout << " -> Profit = " << profit;
            }

            cout << endl;
        }

        return profit;
    }
};

int main() {
    Solution obj;

    vector<int> prices = {100, 180, 260, 310, 40, 535, 695};

    cout << "\nFinal Profit = " << obj.maxProfit(prices);

    return 0;
}