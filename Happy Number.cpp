// Topic : Math
// Link : https://leetcode.com/problems/happy-number/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   bool isHappy(int n) {
        while(n / 10 > 0)
        {
	        int sum = 0;
	        while(n > 0)
            {
		        int r = n % 10;
		        sum = r * r + sum;
		        n = n / 10;
	        }
            n = sum;
        }

        if(n == 1 || n == 7) 
	        return true;
        else
	        return false;
}
};