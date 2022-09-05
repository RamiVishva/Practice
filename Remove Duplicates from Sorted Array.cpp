// Topic: Array
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
       if(n<2){
           return n;
       }
       int ans=1;
       int j=0;
       for(int i=1;i<n;i++)
       {
           if(nums[j]!=nums[i])
           {
               j++;
               nums[j]=nums[i];
               ans++;
           }
       }
       return ans;
    }
};