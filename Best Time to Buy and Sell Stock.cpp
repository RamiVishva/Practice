// Topic : Array
// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int m=0;
        int mi=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            mi=min(prices[i],mi);
            m=max(m,prices[i]-mi);
        }

        return m;
    }
};