//Topic : Linked List
//Link : https://leetcode.com/problems/swap-nodes-in-pairs/description/

#include <bits/stdc++.h>
using namespace std;


//  * Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

//  Without Recursion

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode*prev=head;
        ListNode*curr=head->next;
        ListNode*tem;
        ListNode*nhead=head->next;
        while(1){
            prev->next=curr->next;
            curr->next=prev;
            tem=prev->next;
            if(tem==NULL){
                break;
            }
            curr=tem->next;
            if(curr==NULL){
                break;
            }
            prev->next=curr;
            prev=tem;
        } 
        return nhead;
    }
};

// Using recursion

class Solution1 {
public:
    ListNode* swapPairs(ListNode* head) {
       
        if(head == NULL || head -> next == NULL) 
        {
            return head;
        }
            
        ListNode* temp;
        temp = head->next; 
        
        head->next = swapPairs(head->next->next); 
        temp->next = head; 
        
        return temp; 
    }
};