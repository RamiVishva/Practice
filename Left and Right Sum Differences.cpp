//Topic : Prefix Sum + Array
//Link : https://leetcode.com/problems/left-and-right-sum-differences/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> answer;
        int l=0,r=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            left.push_back(l);
            right.push_back(r);
            l=l+nums[i];
            r=r+nums[n-1-i];
        }
        for(int i=0;i<n;i++){
            answer.push_back(abs(left[i]-right[n-1-i]));
        }
        return answer;
    }
};