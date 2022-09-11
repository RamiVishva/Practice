// Topic : Array
// Link : https://leetcode.com/problems/majority-element/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n/2];
    }
};

// The definition of majority element in the question is, THE ELEMENT that occurs MORE THAN n/2 times. It means that MORE THAN HALF of the array is occupied by MAJORITY ELEMENT. It means that index n/2 (of sorted array) definitely contains the majority element. So will just return that.
// So first of all we sort the array and return the element at index n/2. 