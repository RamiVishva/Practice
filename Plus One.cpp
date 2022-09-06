// Topic: Array
// Link: https://leetcode.com/problems/plus-one/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
         int c=1,r;
        for(int i=n-1;i>=0;--i)
        {
            r=digits[i]+c;
            digits[i]=r%10;
            c=r/10;
            if(c==0)
            {
                break;
            }
        }
        if(c>0)
        {
            digits.insert(digits.begin()+0,c);
        }
        
        return digits;
    }
};