//Topic : Array
//Link : https://leetcode.com/problems/shuffle-the-array/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int n1=nums.size();
        vector<int> x;
        vector<int> y;
        for(int i=0;i<n;i++){
            x.push_back(nums[i]);
        }
        for(int i=n;i<n1;i++){
            y.push_back(nums[i]);
        }
        vector<int> ans;
        int j=0,k=0;
        while(j<x.size() && k<y.size()){
            ans.push_back(x[j]);
            ans.push_back(y[k]);
            j++;
            k++;
        }
        if(j!=x.size()-1){
            while(j<x.size()){
                ans.push_back(x[j]);
                j++;
            }
        }
        if(k!=y.size()-1){
            while(k<y.size()){
                ans.push_back(y[k]);
                k++;
            }
        }
        return ans;

    }
};