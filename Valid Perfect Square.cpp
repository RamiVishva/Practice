//Topic : Math
//Link : https://leetcode.com/problems/valid-perfect-square/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long i=1;;i++){
            if(i*i==num){
                return true;
            }
            if(i*i>num){
                return false;
            }
        }
    }
};