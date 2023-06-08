//Topic : Math
//Link : https://leetcode.com/problems/calculate-delayed-arrival-time/description/

class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int ans=delayedTime+arrivalTime;
        if(ans>=24){
            ans=ans-24;
        }
        return ans;

    }
};