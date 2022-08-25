// Topic : Array
// Link : https://leetcode.com/problems/move-zeroes/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0,j=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                int t = nums[i];
                nums[i]=nums[j];
                nums[j]=t;
                j++;
            }
        }
        
    }
};