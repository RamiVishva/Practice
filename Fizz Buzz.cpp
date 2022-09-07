// Topic: String
// Link : https://leetcode.com/problems/fizz-buzz/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        
        int i=1;
        
        while(i<=n)
        {
            if(i%3==0 && i%5==0)
            {
                ans.push_back("FizzBuzz");
            }
            else if(i%5==0)
            {
                ans.push_back("Buzz");
            }
            else if(i%3==0)
            {
                ans.push_back("Fizz");
            }
            else
            {
                stringstream ss;
                ss << i;
                string str = ss.str();
                ans.push_back(str);
            }
            i++;
        }
        return ans;
    }
};