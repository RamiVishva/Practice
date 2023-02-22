//Topic : Array
//Link : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool check(vector<int> &weights, int days, int c){
        int reqD=1;
        int currW=0;
        for(int i : weights){
            if(currW+i>c){
                reqD++;
                currW=0;
            }
            currW+=i;
        }
        if(reqD>days){
            return false;
        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left=0, right=0;
        
        for(int i: weights){
            left=max(left,i);
            right+=i;
        }

        int mid;
        int ans=right;
        while(left<=right){
            mid=(left+right)/2;
            if(check(weights, days, mid)){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }

};