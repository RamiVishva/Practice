//Topic : Array
//Link : https://leetcode.com/problems/subarray-sums-divisible-by-k/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
 
        vector<int> s(k);
        int sum=0;

        for(int i: nums){
            sum+=(i%k + k)%k;
            s[sum%k]++;
        }

        int ans=s[0];

        for(int i: s){
            ans+=(i*(i-1))/2;
        }

        return ans;
    }
};