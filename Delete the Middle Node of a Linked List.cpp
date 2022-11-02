// Topic : Linked List
// Link : https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/

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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            return NULL;
        }
        ListNode *p1, *p2;
        p1=head;
        p2=head;
        while(p2!=NULL && p2->next!=NULL){
            p1=p1->next;
            p2=p2->next->next;
        }
        if(p1->next==NULL){
            head->next=NULL;
            return head;
        }
        p1->val=p1->next->val;
        p1->next=p1->next->next;
        return head;
    }
};