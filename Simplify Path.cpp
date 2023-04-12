//Topic : String + Stack
//Link : https://leetcode.com/problems/simplify-path/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        stack<string> s;
        for(int i=0;i<n;i++){
            if(path[i]=='/'){
                continue;
            }
            string temp;
            while(path[i]!='/' && i<n){
                temp+=path[i];
                i++;
            }
            if(temp=="."){
                continue;
            }
            else if(temp==".."){
                if(!s.empty()){
                    s.pop();
                }
            }
            else{
                s.push(temp);
            }
        }
        string ans;
        while(!s.empty()){
            ans='/'+s.top()+ans;
            s.pop();
        }
        if(ans.size()==0){
            return "/";
        }
        return ans;
    }
};