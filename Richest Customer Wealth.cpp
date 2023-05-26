//Topic : 2D array
//Link : https://leetcode.com/problems/richest-customer-wealth/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        int ans=0;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            ans=max(ans,sum);
            sum=0;
        }
        return ans;
    }
};