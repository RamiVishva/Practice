//Topic : Array
//Link : https://leetcode.com/problems/determine-the-winner-of-a-bowling-game/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int point(vector<int>& player){
        int t=0;
        int ans=0;
        int n=player.size();
        for(int i=0;i<n;i++){
            if(t){
                ans=ans+(2*player[i]);
                t--;
            }
            else{
                ans+=player[i];
            }
            if(player[i]==10){
                t=2;
            }
        }
        return ans;
    }
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int n1=point(player1);
        int n2=point(player2);

        if(n1>n2){
            return 1;
        }
        else if(n2>n1){
            return 2;
        }
        else{
            return 0;
        }
    }
};