//Topic : Math
//Link : https://leetcode.com/problems/fibonacci-number/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n==0||n==1){
            return n;
        }
       int a=0,b=1,ans=0;
        for( int i=1;i<n;i++){
           ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
    }
};