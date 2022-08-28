// Topic : Math
// Link : https://leetcode.com/problems/palindrome-number/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int r=0;
        int n=x;
        int d;
        while(x!=0)
        {
            d=x%10;
             if((r > INT_MAX/10) || (r < INT_MIN/10)){
                return false;
            }
            r=(r*10)+d;
            x=x/10;
        }
        if(n<0)
        {
            return false;
        }
        if(r==n)
        {
            return true;
        }
        return false;
        
    }
};