#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        if(n==1){
            return;
        }
        int temp,fl=0;
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++){
                //For any index if any smaller value is there in next indexies then swap both
                //Else sort the array from current to end

                if(nums[j]>nums[i]){
                    
                    fl=1;
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    break;
                }

            }
            if(fl==0){
                sort(nums.begin()+i,nums.end());
            }
            else{
                break;
            }
        }
    }
};