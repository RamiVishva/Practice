//Topic : String + Stack
//Link : https://leetcode.com/problems/removing-stars-from-a-string/description/

#include <bits/stdc++.h>
using namespace  std;

class Solution {
public:
    string removeStars(string s) {
        int n=s.size();
        string str;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                str.pop_back();
            }
            else{
                str.push_back(s[i]);
            }
        }
        
        return str;
    }
};