// Topic : Array
// Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
        
    }
};