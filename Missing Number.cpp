// Topic : Array
// Link : https://leetcode.com/problems/missing-number/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=0;
        int t=nums.size() * (nums.size()+1)/2;
        for(auto number : nums)
        {
            s+=number;
        }
        return t-s;
        
    }
};