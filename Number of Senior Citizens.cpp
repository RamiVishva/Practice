//Topic : Array
//Link : https://leetcode.com/problems/number-of-senior-citizens/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        int n=details.size();
        for(int i=0;i<n;i++){
            string age=details[i].substr(11,2);
            int a=stoi(age);
            if(a>60){
                c++;
            }
        }
        return c;
    }
};