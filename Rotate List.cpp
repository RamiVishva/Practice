//Topic : Linked List
//Link : https://leetcode.com/problems/rotate-list/

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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *a=head;
        if(head==NULL || head->next==NULL){
            return head;
        }
        int c=1;
        while(a->next!=NULL){
            a=a->next;
            c++;
        }
        k=k%c;
        
        while(k--){
            ListNode*c=head;
            ListNode*t;
            while(c->next!=NULL){
                c=c->next;
            }
            c->next=head;
            t=c;
            head=c;
            ListNode *m=head;
            while(m->next!=t){
                m=m->next;
            }
            m->next=NULL;
        }
        return head;
    }
};