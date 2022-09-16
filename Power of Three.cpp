// Topic : Math
// Link : https://leetcode.com/problems/power-of-three/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        while(n>1)
        {
            if(n%3==0)
            {
                n=n/3;
            }
            else{
                n=0;
            }
        }
        if(n==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};