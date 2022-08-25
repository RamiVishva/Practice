// Topic : string
// Link : https://leetcode.com/problems/valid-palindrome/

#include <bits./stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s1+=s[i];
            }
            if(s[i]>=97 && s[i]<=122)
            {
                s1+=s[i];
            }
            if(s[i]>=48 && s[i]<=57)
            {
                s1+=s[i];
            }
        }
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
       int n = s1.length();
        for(int i=0;i<n/2;i++)
        {
            if(s1[i]!=s1[n-i-1]) return 0;
        }
        return 1;
    }
};