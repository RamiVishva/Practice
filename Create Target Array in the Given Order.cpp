//Topic : array
//Link : https://leetcode.com/problems/create-target-array-in-the-given-order/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector<int> arr(n);

        for(int i =0;i<n;i++){
            int t=index[i];
            arr.insert(arr.begin() + t, nums[i]);
        }

        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(arr[i]);
        }
        
        return ans;
    }
};