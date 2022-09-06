// Topic: Array
// Link : https://leetcode.com/problems/merge-intervals/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int j=0;
        int i=1;
        if(intervals.size()<2)
        {
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=ans[j][1])
            {
                ans[j][1]=max(intervals[i][1],ans[j][1]);
            }
            else{
                j++;
                ans.push_back(intervals[i]);   
            }           
        }
        return ans;
    }
};