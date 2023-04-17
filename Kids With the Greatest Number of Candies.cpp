//Topic : Array
//Link : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m=0;
        for(int i=0;i<candies.size();i++){
            m=max(m,candies[i]);
        }
        vector<bool>ans;
        int s=0;
        for(int i=0;i<candies.size();i++){
            s=candies[i]+extraCandies;
            if(s>=m){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};