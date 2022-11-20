//Topic : Linked List
//Link : https://leetcode.com/problems/reverse-nodes-in-k-group/

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *d=head;
        int l=k;
        while(l){
            if(d==NULL){
                return head;
            }
            d=d->next;
            l--;
        }
        if(head==NULL){
            return NULL;
        }
        
        ListNode *p=NULL;
        ListNode *c=head;
        ListNode *n=NULL;
        int count=0;
        while(c!=NULL && count<k){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
            count++;
        }
        
        if(n!=NULL){
            head->next=reverseKGroup(n, k);
        }
        
        return p;
    }
};