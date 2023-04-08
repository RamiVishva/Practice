//Topic : Binary Search
//Link : https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isBadVersion(int m){
        //The API isBadVersion is defined for you
        return true;
    }
    int firstBadVersion(int n) {
        int ans=-1;
        int l=1,r=n;
        while(l<=r){
           int m=l+(r-l)/2;
           if(isBadVersion(m)==true){
               ans=m;
               r=m-1;
           }
           else{
               l=m+1;
           }
        }
        return ans;
        
    }
};
