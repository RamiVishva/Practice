//Topic : Array
//Link : https://leetcode.com/problems/boats-to-save-people/description/

#include <bits/stdc++.h>
using namespace std;

    class Solution {
    public:
        int numRescueBoats(vector<int>& people, int limit) {
            int n=people.size();
            int s=0,b=0;
            sort(people.begin(),people.end());
            int i=0,j=n-1;
            while(i<=j){
                s=people[i]+people[j];
                if(s<=limit){
                    b++;
                    i++;
                    j--;
                }
                else{
                    b++;
                    j--;
                }
            }
            return b;
        }
    };