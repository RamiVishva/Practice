//Topic : Searching
//Link : https://leetcode.com/problems/binary-search/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binary(vector<int>& nums,int l,int r,int t){
        while(l<=r){
            int m=(l+r)/2;
            if(nums[m]==t){
                return m;
            }
            else if(nums[m]<t){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int index=binary(nums,0,n-1,target);
        return index;
    }
};