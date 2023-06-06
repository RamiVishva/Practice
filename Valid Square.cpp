//Topic : Math
//Link : https://leetcode.com/problems/valid-square/submissions/964872643/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> points = {p1, p2, p3, p4};
        
        unordered_map<int, int> mp;
        int side2 = INT_MAX;
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                int x = points[i][0] - points[j][0]; 
                int y = points[i][1] - points[j][1];
            
                int var = x * x + y * y; 
                
                side2 = min (side2, var);
                
                mp[var]++;
            }
        }      
        return mp[side2] == 4 && mp[2 * side2] == 2; 
    }
};