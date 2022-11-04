//Topic : Linked List
//Link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *c=head;
        int l=0;
        while(c){
            c=c->next;
            l++;
        }
        if(l==1 && n==1){
            return NULL;
        }
        c=head;
        int k=l-n;
        if(k==0){
            head=c->next;    
        }
        for(int i=1;i<k;i++){
            c=c->next;
        }
        ListNode *ne=c->next;
        c->next=ne->next;
        return head;
    }
};