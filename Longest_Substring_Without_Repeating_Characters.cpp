//Topic : String
//Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int start=0,end=0,len=0;
      unordered_set<char> charSet;
      while(end<s.length()){
          if(charSet.find(s[end])==charSet.end()){
              charSet.insert(s[end]);
              end++;
              len=max(len,end-start);
          }
          else{
              charSet.erase(s[start]);
              start++;
          }
      }
      return len;
    }
};