//Topic : String
//Link : https://leetcode.com/problems/optimal-partition-of-string/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partitionString(string s) {
        int part=1;
        set<char> x;
        for(auto it :s){
            if(x.find(it)!=x.end()){
                x.clear();
                part++;
            }
            x.insert(it);
        }
        return part;
    }
};