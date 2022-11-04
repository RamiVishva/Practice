//Topic : Linked List
//Link : https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *c=head;
        while(c!=NULL && c->next!=NULL){
            ListNode *n=c->next;
            if(c->val==n->val){
                c->next=n->next;
            }
            else{
             c=n;   
            }
        }
        return head;
    }
};