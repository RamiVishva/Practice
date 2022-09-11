// Topic : Array
// Link : https://leetcode.com/problems/rotate-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        while(k>n)
        {
            k=k-n;
        }
        for(int i=n-k;i<n;i++)
        {
            ans.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++)
        {
            ans.push_back(nums[i]);
        }
            nums=ans;
    }
};