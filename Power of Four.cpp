//Topic : Math
//Link : https://leetcode.com/problems/power-of-four/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        long long x=1;
        for(int i=0;i<=n;i++){
            x=pow(4,i);
            if(x==n){
                return true;
            }
            if(x>n){
                return false;
            }
        }
        return false;
    }
};