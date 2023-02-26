//Topic : Math
//Link : https://leetcode.com/problems/excel-sheet-column-title/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        while(columnNumber>0){
            char ans = 'A' + (columnNumber-1)%26;
            result = ans + result;
            columnNumber = (columnNumber-1)/26;
        }
        return result;
    }
};