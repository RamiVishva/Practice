//Topic : Math
//link : https://leetcode.com/problems/max-points-on-a-line/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        if(points.size()==1 || points.size()==2){
            return points.size();
        }

        int in=0;
        int ans=0;
        double slope;

        for(int i=0;i<points.size();i++){
            unordered_map<double,int> mp;

            for(int j=i;j<points.size();j++){

                if(points[j][0]==points[i][0]){
                    in++;
                    ans=max({ans,in});
                }
                else{
                    slope=(double)(points[j][1]-points[i][1])/(double)(points[j][0]-points[i][0]);
                    mp[slope]++;
                    ans=max({ans,mp[slope]+1});
                }
            }
            in=0;
        }
        return ans;
    }
};