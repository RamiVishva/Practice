// Topic : Linked List
// Link : https://leetcode.com/problems/middle-of-the-linked-list/

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *s, *f;
        s=head;
        f=head;
        while(f!=NULL and f->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
};