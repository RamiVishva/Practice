// Topic : Math
// Link : https://leetcode.com/problems/powx-n/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
 double myPow(double x, int n) {
		double ans = 1.0;
		long long temp = abs(n);
		while(temp) {
			if(temp % 2 != 0) {
				ans = ans * x;
				temp = temp - 1;
			}
			else {
				x = x * x;
				temp = temp / 2;
			}
		}
		if(n<0)
			ans = 1/ans;
		return ans;
	}
};