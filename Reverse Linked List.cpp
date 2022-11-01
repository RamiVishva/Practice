// Topic : Linked List
// Link : https://leetcode.com/problems/reverse-linked-list/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *c,*n,*p;
        p=NULL;
        c=head;
        while(c!=NULL){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        head=p;
        return head;
    }
};