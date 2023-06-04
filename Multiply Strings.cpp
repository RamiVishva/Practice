//Topic : String
//LInk : https://leetcode.com/problems/multiply-strings/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0";
        vector< int> temp(num1.size() + num2.size(),0);

        for(int i = num1.size()-1; i>=0; i--){
            for(int j = num2.size()-1; j>=0; j--){
                temp[i+j+1] += (num1[i] -'0')*(num2[j]-'0');
                temp[i+j] += temp[i+j+1]/10;
                temp[i+j+1] = temp[i+j+1]%10;
            }
        }

        int i = 0;
        while(temp[i] == 0) i++;
        string ans = "";
        while(i<temp.size()) ans+=to_string(temp[i++]);
        return ans;
    }
};