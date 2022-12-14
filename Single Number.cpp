// Topic : Array
// Link : https://leetcode.com/problems/single-number/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1)
        {
            return nums[0];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
            {
                i++;
            }
            else
                return nums[i];
        }
        return 0;
    }
};