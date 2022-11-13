// Topic : 2D Array
// link : https://leetcode.com/problems/set-matrix-zeroes/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int row[r];
        int col[c];
         for(int i=0;i<r;i++)
            row[i]=false;
        
        for(int i=0;i<c;i++)
            col[i]=false;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(row[i]==true || col[j]==true){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};