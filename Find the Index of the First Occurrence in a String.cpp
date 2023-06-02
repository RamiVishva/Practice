//Topic : String
//Link : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        for(int i=0; i<n; i++){
            int j;
            for(j=0; j<m; j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j==m){
                return i;
            }
        }
        return -1;
    }
};
