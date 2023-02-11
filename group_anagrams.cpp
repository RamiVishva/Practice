//Topic : String 
//Link : https://leetcode.com/problems/group-anagrams/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> bucket;
        int n=strs.size();
        string t;
        for(int i=0;i<n;i++){
            t=strs[i];
            sort(strs[i].begin(),strs[i].end());
            bucket[strs[i]].push_back(t);
        }
        vector<vector<string>> ans;
        for(auto it=bucket.begin();it!=bucket.end();it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};