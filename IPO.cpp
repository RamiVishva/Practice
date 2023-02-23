//Topic : Priority_queue
//Link : https://leetcode.com/problems/ipo/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++){
            p.push_back({capital[i],profits[i]});
        }
        sort(p.begin(),p.end());
        priority_queue<int> maxP;
        int i=0;
        while(k--){
            while(i<n && w>=p[i].first){
                maxP.push(p[i].second);
                i++;
            }
            if(!maxP.empty()){
                w+=maxP.top();
                maxP.pop();
            }
        }
        return w;
    }
};