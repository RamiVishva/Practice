//Topic : Math
//Link : https://leetcode.com/problems/excel-sheet-column-number/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(char c : columnTitle)
        {
            int diff = c - 'A' + 1;
            result = result * 26 + diff;
        }
        return result;
    }
};