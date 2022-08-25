// Topic : Array
// Link : https://leetcode.com/problems/product-of-array-except-self/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int m=1;
        int n=nums.size();
        int z=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0){
                z=z+1;
            }
            else{
                m=m*nums[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(z>1)
            {
                nums[i]=0;
            }
            else if(z==1)
            {
                if(nums[i]==0)
                {
                    nums[i]=m;
                }
                else
                {
                    nums[i]=0;
                }
            }
            else
            {
                nums[i]=m/nums[i];
            }
        }
        return nums;
        
    }
};