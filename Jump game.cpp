// Topic : Array
// Link : https://leetcode.com/problems/jump-game/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums[0]==0 && nums.size()>1)
        {
            return false;
        }
        if(nums[0]==0 && nums.size()==1)
        {
            return true;
        }
        if(nums.size()==1)
        {
            return true;
        }
        int n=nums.size();
        int p=0;
        for(int i=0;i<nums.size();i++)
        {
             p=max(nums[i]+i,p);
            if(p==i && p<n-1)
            {
                return false;
            }
        }
        return true;
    }
};