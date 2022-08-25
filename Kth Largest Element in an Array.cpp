// Topic : Array
// Link : https://leetcode.com/problems/kth-largest-element-in-an-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int r=(nums.size()-1)-(k-1);
        return nums[r];
         
    }
};