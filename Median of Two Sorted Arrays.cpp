//Topic : Array
//Link : https://leetcode.com/problems/median-of-two-sorted-arrays/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> newarr;
        newarr=nums1;
        for(int i=0;i<nums2.size();i++){
            newarr.push_back(nums2[i]);
        }
        sort(newarr.begin(),newarr.end());
        int n=newarr.size();
        double ans,sum;
        if(n%2==0){
            sum=(newarr[n/2]+newarr[(n/2) - 1]);
            ans=sum/2;
        }
        else{
            ans=newarr[n/2];
        }
        return ans;
    }
};