// Topic : Array
// Link : https://leetcode.com/problems/contains-duplicate-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> set;
        for(int i=0; i<nums.size(); i++)
        {
            if(set.count(nums[i])>0)
                return true;
            set.insert(nums[i]);
            if(set.size()>k)
            {
                set.erase(nums[i-k]);
            }
        }
        return false;
    }
};