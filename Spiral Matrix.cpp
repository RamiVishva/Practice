// Topic : 2D Array
// Link : https://leetcode.com/problems/spiral-matrix/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int r1=0, c1=0, r2=matrix.size()-1, c2=matrix[0].size()-1;
        while(r1<=r2 && c1<=c2){
            
            for(int c=c1;c<=c2 && r1<=r2;c++){
                ans.push_back(matrix[r1][c]);
            }
            r1++;
            for(int r=r1;r<=r2 && c1<=c2;r++){
                ans.push_back(matrix[r][c2]);
            }
            c2--;
            for(int c=c2;c>=c1 && r1<=r2;c--){
                ans.push_back(matrix[r2][c]);
            }
            r2--;
            for(int r=r2;r>=r1 && c1<=c2;r--){
                ans.push_back(matrix[r][c1]);
            }
            c1++;
        }
        return ans;
    }
};