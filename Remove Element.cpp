// Topic : Array
// Link : https://leetcode.com/problems/remove-element/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                nums[i]=INT_MAX;
                c++;
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size()-c;
    }
};