//Topic : Stack
//link : https://leetcode.com/problems/backspace-string-compare/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;

        for(int i=0; i<s.size(); i++){
            st1.push(s[i]);
            if(st1.top() =='#'){
                st1.pop();
                if(!st1.empty()){
                    st1.pop();
                }
            }
        }

        for(int i=0;i<t.size(); i++){
            st2.push(t[i]);
            if(st2.top() =='#'){
                st2.pop();
                if(!st2.empty()){
                    st2.pop();
                }
            }
        }
        
        if(st1.size() != st2.size()){
            return false;
        }

        while(!st1.empty() && !st2.empty()){
            if(st1.top()!=st2.top()){
                return false;
            }
            st1.pop();
            st2.pop();
        }
        return true;
    }
};