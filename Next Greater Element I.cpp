//Topic : Stack
//Link : https://leetcode.com/problems/next-greater-element-i/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int index(vector<int> nums2, int x){
        int n=nums2.size();
        for(int i=0;i<n;i++){
            if(nums2[i]==x){
                return i;
            }
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n=nums1.size();
        for(int i=0;i<n;i++){
            int v=-1;
            int p=index(nums2,nums1[i]);
            for(int j=p+1;j<nums2.size();j++){
                if(nums2[j]>nums1[i]){
                    v=nums2[j];
                    break;
                }
            }
            ans.push_back(v);
            
        }        
        return ans;
    }
};