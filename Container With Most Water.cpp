// Topic : Array
// Link : https://leetcode.com/problems/container-with-most-water/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
     int ar = INT_MIN;
     int h= INT_MAX;
        int n=height.size();
        int r;
       
        int i=0;
        int j=n-1;
        while(i<j)
        {
              h=min(height[i],height[j]);
                r=h*(j-i);
                ar=max(ar,r);
            
            if(height[i]>height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return ar;  
    }
};