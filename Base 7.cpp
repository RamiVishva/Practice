//Topic : Math
//Link : https://leetcode.com/problems/base-7/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToBase7(int n) {
        string str="";
        int r;
        int num=abs(n);
        if(n==0){
            return "0";
        }
        while(num!=0){
            r=num%7;
            str=to_string(r)+str;
            num/=7;
        }
        if(n<0){
            return "-"+str;
        }
        return str;
    }
};