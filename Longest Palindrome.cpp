//Topic : string
//Link : https://leetcode.com/problems/longest-palindrome/description/?envType=study-plan&id=level-1

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> count;
        for(char c:s){
            count[c]++;
        }
        int res=0;
        bool odd=false;
        for(auto it : count){
            if(it.second%2==0){
                res=res+it.second;
            }
            else{
                odd=true;
                res=res+it.second-1;
            }
        }
        if(odd){
            res++;
        }
        return res;
    }
};