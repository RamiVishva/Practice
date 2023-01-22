//Topic : array
//Link : https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0, e=arr.size()-1;
        int m=s+(e-s)/2;
        while(s<e){
            if(arr[m]<arr[m+1]){
                s=m+1;
            }
            else{
                e=m;
            }
            m=s+(e-s)/2;
        }
        return s;
    }         
};