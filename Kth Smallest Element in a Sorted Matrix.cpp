//Topic : 2D Array
//Link : https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> bts;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                bts.push_back(matrix[i][j]);
            }
        }
        sort(bts.begin(),bts.end());
        if(bts.size()<k){
            return -1;
        }
        
        return bts[k-1];
    }
};