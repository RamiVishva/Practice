//Topic : Array
//Link : https://leetcode.com/problems/sign-of-the-product-of-an-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int n=0;
        int z=0;
        for(int i=0;i<nums.size();i++){
           
            if(nums[i]<0){
                n++;
            }
            else if(nums[i]==0){
                z++;
            }
        }
        if(z>0){
            return 0;
        }
        else if(n%2==0){
            return 1;
        }
        else{
            return -1;
        }
        
    }
};