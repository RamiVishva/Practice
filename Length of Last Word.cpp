// Topic : String
// Link : https://leetcode.com/problems/length-of-last-word/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0;
        for(int i=s.size()-1;i>=0;--i){
            if(s[i] == ' ' && c>0)
            {
                return c;
            }
            if(s[i] != ' ') 
            {
                c++;
            }
        }
        return c;
    }
};