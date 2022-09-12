// Topic : Array
// Link : https://leetcode.com/problems/longest-consecutive-sequence/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int longestConsecutive(vector<int>& nums) {
        int n = nums.size(); 
        if(n == 0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int ans = 0, c=1;
        for(int i = 1; i < n; i++)
        {
            if(nums[i] == nums[i - 1] + 1)
            {
                c++;
            }
            else if(nums[i] != nums[i - 1])
            {
                ans = max(ans, c); 
                c=1;
            }
        }
        ans = max(ans, c); 
        return ans; 
    }
};