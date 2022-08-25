// Topic : Array
// Link : https://leetcode.com/problems/reverse-integer/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int r=0,n;
        while(x!=0)
        {
            n=x%10;
            if((r>INT_MAX/10) || (r<INT_MIN/10)){
                return 0;
            }
            r = (r*10) + n;
            x=x/10;
        }
        return r;
    }
};