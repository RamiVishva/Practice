//Topic : Binary Search
//Link : https://leetcode.com/problems/find-the-duplicate-number/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s=0,l=nums.size()-1,c;
        while(s<=l){
            int m=s+(l-s)/2;
            c=0;
            for(int n: nums){
                if(n<=m){
                    c++;
                }
                
            }
            if(c<=m){
                s=m+1;
            }
            else{
                l=m-1;
            }
        }

        return s;
    }
};