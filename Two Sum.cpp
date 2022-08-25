// Topic : Array
// Link : https://leetcode.com/problems/two-sum/

#include <bits./stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
       
        vector<int> r;
        for(int i=0;i<n;i++)
        {
           for(int j= i+1;j<n;j++)
           {
            if(nums[i]+nums[j]==target)
            {
                r.push_back(i);
                r.push_back(j);
            }
           }
           
        }
        return r;
    }
};