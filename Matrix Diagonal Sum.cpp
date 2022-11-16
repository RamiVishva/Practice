// Topic : 2D Array
// Link : https://leetcode.com/problems/matrix-diagonal-sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int a=mat[0].size()-1;
        int i=0, s=mat.size()-1;
        int sum=0;
        while(s>=0){
            sum=sum+mat[i][a-i]+mat[i][i];                           
            s--;
            i++;
        }
        if(n%2!=0){
            sum=sum-mat[n/2][n/2];
        }
        return sum;
    }
};