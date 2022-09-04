// Topic: Array
// Link: https://leetcode.com/problems/intersection-of-two-arrays/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> ans;
        
           int arr[1000]={-1};
        for(int i=0;i<n1;i++)
        {
            arr[nums1[i]]=1;
        }
        for(int j=0;j<n2;j++)
        {
            if(arr[nums2[j]]==1)
            {
                arr[nums2[j]]=-1;
                ans.push_back(nums2[j]);
            }
        }
            return ans;
    }
};