// Topic: Array
// Link: https://leetcode.com/problems/insert-interval/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        
        for(int i=0;i<intervals.size();i++)
        {
           if(intervals[i][1]<newInterval[0])
           {
               ans.push_back(intervals[i]);
           }
            else if(intervals[i][0]>newInterval[1])
            {
                ans.push_back(newInterval);
                while(i<intervals.size())
                {
                    ans.push_back(intervals[i]);
                    i++;
                }
                return ans;
            }
            else
            {
                newInterval[0]=min(newInterval[0],intervals[i][0]);
                newInterval[1]=max(newInterval[1],intervals[i][1]);
            }
        }
        ans.push_back(newInterval);
        return ans;
    }
};