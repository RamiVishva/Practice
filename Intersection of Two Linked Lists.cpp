// Topic : Linked List
// Link : https://leetcode.com/problems/intersection-of-two-linked-lists/

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t;
        while(headA!=NULL){
            t=headB;
            while(t!=NULL){
                if(headA==t){
                    return headA;
                }
                t=t->next;
            }
            headA=headA->next;
        }
        return NULL;
        
    }
};