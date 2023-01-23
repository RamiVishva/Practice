//Topic: String
//Link : https://leetcode.com/problems/reverse-string/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int st=0,en=n-1;            //st : start index en : end index
        
        for(int i=0;i<n/2;i++){
            char t=s[st];
            s[st]=s[en];
            s[en]=t;
            st++;
            en--;
        }
        
    }
};