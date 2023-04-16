//Topic : Binary Search
//Link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int first(vector<int>&nums,int target){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int res=-1;

        while(s<=e){
            int m=s + (e-s)/2;
            if(nums[m]==target){
                res=m;
                e=m-1;
            }
            else if(nums[m]<target){
                s=m+1;
            }
            else if(nums[m]>target){
                e=m-1;
            }

        }
        return res;
    }
    int last(vector<int>&nums,int target){
        int n=nums.size();
        int s=0;
        int e=n-1;
        int res=-1;

         while(s<=e){
            int m=s + (e-s)/2;
            if(nums[m]==target){
                res=m;
                s=m+1;
            }
            else if(nums[m]<target){
                s=m+1;
            }
            else if(nums[m]>target){
                e=m-1;
            }           
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {first(nums,target),last(nums,target)};
    }
};