//Topic : String
//Link : https://leetcode.com/problems/palindromic-substrings/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int maxlen=0;
        int ans=0;
        if(n<2){
            return s.size();
        }
        int low,high;
        int start = 0;
        for(int i=0;i<n;i++){
            low=i-1;
            high=i+1;
            while(low>=0 && high<n && s[low]==s[high]){
                low--;
                high++;
            }
            int length=high-low-1;
            ans+=(length+1)/2;
            low=i;high=i+1;
            while(low>=0 && high<n && s[low]==s[high]){
                low--;
                high++;
            }
            length=high-low-1;
            ans+=(length+1)/2;
        }
        return ans;
    }
};