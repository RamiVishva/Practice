//Topic : String
//Link : https://leetcode.com/problems/merge-strings-alternately/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        int i=0,j=0;
        string ans="";
        while(i<n && j<m){
            ans+=word1[i];
            ans+=word2[j];
            i++;
            j++;
        }
        if(i==n){
            while(j<m){
                ans+=word2[j];
                j++;
            }
        }
        if(j==m){
            while(i<n){
                ans+=word1[i];
                i++;
            }
        }

        return ans;
    }
};