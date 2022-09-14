// Topic : Math
// Link : https://leetcode.com/problems/climbing-stairs/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) 
        {
            return n;
        }
        int p = 2, p1 = 1, ans;
        for (int i = 3; i <= n; i++) {
            ans = p + p1;
            p1 = p;
            p = ans;
        }
        return ans;
    }
};