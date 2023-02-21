//Topic : Array
//Link : https://leetcode.com/problems/rotate-image/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int nr=matrix.size();
        int nc=matrix[0].size();

        vector<vector<int>> temp(nr, vector<int>(nc, 0));

        for(int i=0;i<nr;i++){
            for(int j=0;j<nr;j++){
                temp[j][nr-1-i]=matrix[i][j];
            }
        }

        for(int i=0;i<nr;i++){
            for(int j=0;j<nc;j++){
                matrix[i][j]=temp[i][j];
            }
        }
        
    }
};