//Topic : Linked List + Stack
//Link : https://leetcode.com/problems/reorder-list/description/

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
    void reorderList(ListNode* head) {
        stack<ListNode*>st;
        ListNode *p=head;
        int n=0;
        while(p!=NULL){
            st.push(p);
            p=p->next;
            n++;
        }
        ListNode *curr=head;
        ListNode *next=NULL;
        for(int i=0;i<n/2;i++){
            next=curr->next;
            curr->next=st.top();
            st.pop();
            curr=curr->next;
            curr->next=next;
            curr=curr->next;
        }        
        curr->next=NULL;
    }
};