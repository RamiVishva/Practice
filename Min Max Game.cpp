//Topic : Array
//Link : https://leetcode.com/problems/min-max-game/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=log2(nums.size());
        vector<int> r=nums;
        while(n>0){
            int f=0;
            vector<int> x;
            for(int i=0;i<r.size();i=i+2){
                if(f==0){
                    x.push_back(min(r[i],r[i+1]));
                    f=1;
                }
                else if(f==1){
                    x.push_back(max(r[i],r[i+1]));
                    f=0;
                }
            }
            r=x;
            n--;
        }
        return r[0];        
    }
};