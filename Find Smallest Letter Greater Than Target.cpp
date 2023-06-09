//Topic : Array + Char
//Link : https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        sort(letters.begin(),letters.end());
        for(int i=0;i<letters.size();i++){
            if(letters[i]>target){
                return letters[i];
            }
        }
        return letters[0];
    }
};