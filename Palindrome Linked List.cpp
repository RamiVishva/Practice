// Topic : Linked List
//https://leetcode.com/problems/palindrome-linked-list/

#include <bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

// class Solution {
// public:
//     ListNode* reverse(ListNode *head){
//         ListNode *c=head;
//         ListNode *p=NULL;
//         ListNode *n;
//         while(c!=NULL){
//             n=c->next;
//             c->next=p;
//             p=c;
//             c=n;
//         }
//         return c;
//     }
//     ListNode* middle(ListNode *head){
//         ListNode *s=head;
//         ListNode *f=head;
//         while(f!=NULL && f->next!=NULL){
//             s=s->next;
//             f=f->next->next;
//         }
//         return s;
//     }
//     bool isPalindrome(ListNode* head) {
//         ListNode *c=head;
//         if(c==NULL || c->next==NULL){
//             return true;
//         }
//         ListNode *mid=middle(c);
//         ListNode *last=reverse(mid->next);
//         while(last!=NULL){
//             if(last->val != c->val){
//                 return false;
//             }
//             last=last->next;
//             c=c->next;
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head, *prev, *temp;
        while (fast && fast->next)
        {
            slow = slow->next, fast = fast->next->next;
        }
        prev = slow, slow = slow->next, prev->next = NULL;
        while (slow){
            temp = slow->next, slow->next = prev, prev = slow, slow = temp;
        }
        fast = head, slow = prev;
        while (slow)
        {   if (fast->val != slow->val) return false;
            else fast = fast->next, slow = slow->next;
        }
        return true;
    }
};