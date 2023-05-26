//Topic : Array
//Link : https://leetcode.com/problems/shuffle-string/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        vector<char> str(n);
        for(int i=0;i<n;i++){
            int t=indices[i];
            str[t]=s[i];
        }
        string ans;
        for(int i=0;i<n;i++){
            ans=ans+str[i];
        }
        return ans;
    }
};