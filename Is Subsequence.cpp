//Topic : string
//link : https://leetcode.com/problems/is-subsequence/description/?envType=study-plan&id=level-1

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        if(n1>n2){
            return false;
        }
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }

        if(i==n1){
            return true;
        }
        else{
            return false;
        }
        
    }
};