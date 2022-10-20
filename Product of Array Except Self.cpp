// Topic : Array
// Link : https://leetcode.com/problems/product-of-array-except-self/

#include <bits/stdc++.h>
using namespace std;

//First approch

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

//Second approch

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int t=1;
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i]=t;
            t=t*nums[i];
        }
        t=1;
        for(int i=n-1;i>=0;i--){
            ans[i]=ans[i]*t;
            t=t*nums[i];
        }
        return ans;
    }
};