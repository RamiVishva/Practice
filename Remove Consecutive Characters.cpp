//Topic : String
//Link : https://practice.geeksforgeeks.org/problems/consecutive-elements2306/1
//Platform : GeeksForGeeks

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        stack<char> st;
        for(int i=0;i<S.length();i++){
            if( (st.empty()==0 && st.top()!=S[i]) || st.empty()==1){
                st.push(S[i]);
            }
        }
        string ans;
        while(st.empty()==0){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};