// LeetCode #121 — Best Time to Buy and Sell Stock
// Problem:
// You are given an array prices where prices[i] is the price of a stock on day i.
// You want to maximize your profit by:
// Choosing a day to buy
// Choosing a later day to sell
// Return the maximum profit you can achieve.
// If no profit is possible, return 0.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        for(int i = 0; i < prices.size(); i++) {
            for(int j = i+1; j < prices.size(); j++) {
                if(prices[j] - prices[i] > maxProfit)
                    maxProfit = prices[j] - prices[i];
            }
        }
        return maxProfit;
    }
};

int main() {
    Solution obj;
    vector<int> prices = {7,1,5,3,6,4};
    cout << obj.maxProfit(prices);
return 0;
}