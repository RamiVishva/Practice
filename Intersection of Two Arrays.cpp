// Topic: Array
// Link: https://leetcode.com/problems/intersection-of-two-arrays/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
         int n =nums1.size();
         int m = nums2.size();        
        vector<int> ans;
        
        for(int x =0 ; x<n; x++)
        {
              if(x>0 &&nums1[x]==nums1[x-1])
            {
                continue;
              }
            for(int z = 0; z<m; z++)
            {
                  if(z>0 &&nums2[z]==nums2[z-1])
            {
                continue;
              }
               if(nums1[x] == nums2[z])
                {
                  
                    ans.push_back(nums1[x]);
                
               }
            }
        }
        
    
        
        return ans;

        
    }
};