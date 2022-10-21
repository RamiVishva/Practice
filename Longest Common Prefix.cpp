// Topic : String
// Link : https://leetcode.com/problems/longest-common-prefix/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0){
            return " ";
        }
        else if(n==1){
            return strs[0];
        }
        
        string res="";
        sort(strs.begin(),strs.end());
        string a = strs[0];
        string b = strs[n-1];
        
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                res=res+a[i];
            }
            else{
                break;
            }
        }
        return res;
        
    }
};