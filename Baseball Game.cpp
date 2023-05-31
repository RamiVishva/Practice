//Topic : Array
//Link : https://leetcode.com/problems/baseball-game/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;
        int n=operations.size();
        for(int i=0;i<n;i++){
            if(operations[i]=="C"){
                v.pop_back();
            }
            else if(operations[i]=="D"){
                int t=v.back();
                v.push_back(2*t);
            }
            else if(operations[i]=="+"){
                int j=v.back() + v[v.size()-2];
                v.push_back(j);
            }
            else{
                int k=stoi(operations[i]);
                v.push_back(k);
            }
        }
        int sum=0;
        for(int i: v){
            sum+=i;
        }
        return sum;

    }
};