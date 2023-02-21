//Topic : Array
//Link : https://leetcode.com/problems/single-element-in-a-sorted-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> unmap;
        for(auto i: nums){
            unmap[i]++;
        }
        for(auto it: unmap){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};