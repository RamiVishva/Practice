//Topic : Linked List
//Link : https://leetcode.com/problems/remove-linked-list-elements/

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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL){
            return head;
        }
        while(head!=nullptr && head->val==val){
            head = head->next;
        }
        ListNode *c=head;
        ListNode *p=nullptr;
        while(c!=nullptr){
            
            if(c->val==val){
                p->next = c->next;
                c = c->next;
            }
            else{
                p = c;
                c = c->next;        
            }
        }
        return head;
    }
};