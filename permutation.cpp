// Topic: Array
// Link: https://leetcode.com/problems/permutations/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
       if(nums.size()<1)
       {
           return {nums};
       }
        vector<vector<int>> r;
        for(int i=0;i<nums.size();i++)
        {
            vector<int> v(nums.begin(),nums.end());
            v.erase(v.begin()+i);
            auto res=permute(v);
            for(int j=0;j<res.size();j++)
            {
                vector<int> a=res[j];
                a.insert(a.begin(),nums[i]);
                r.push_back(a);
            }
        }
        return r;
    }
};