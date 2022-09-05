// Topic: Array
// Link: https://leetcode.com/problems/find-peak-element/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans;
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        int p=temp[temp.size()-1];
        for(int i=0;i<nums.size();i++)\
        {
            if(p==nums[i])
            {
                ans=i;
            }
        }
        return ans;
    }
};