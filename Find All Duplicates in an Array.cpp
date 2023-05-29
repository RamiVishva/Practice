//Topic : Array
//Link : https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       map<int,int> mp;
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
           if(mp[nums[i]]==0){
               mp[nums[i]]++;
           }
           else{
               ans.push_back(nums[i]);
           }
       }
       return ans;
    }
};