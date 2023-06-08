//Topic : math
//Link : https://leetcode.com/problems/perfect-number/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 1;
        for(int i = 2; i <= sqrt(num); ++i)
            if (num % i == 0) {
                sum += i + num/i;
            }
        if (sqrt(num)*sqrt(num)==num) sum -= sqrt(num);
        return sum==num;
    }
};