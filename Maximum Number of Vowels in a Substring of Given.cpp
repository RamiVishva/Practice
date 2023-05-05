//Topic : String + Sliding Window
//Link : https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int m_count = 0;
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i >= k && vowels.count(s[i-k])) {
                count--;
            }
            if (vowels.count(s[i])) {
                count++;
            }
            m_count = max(m_count, count);
        }
        return m_count;
    }
};