//Topic : Linked List
//Link : https://leetcode.com/problems/merge-k-sorted-lists/description/

#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* merge(ListNode* l1, ListNode* l2){
        if(!l1){
            return l2;
        }
        if(!l2){
            return l1;
        }

        if(l1->val<=l2->val){
            l1->next=merge(l1->next,l2);
            return l1;
        }
        else{
            l2->next=merge(l1,l2->next);
            return l2;
        }

        return NULL;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }
        else if(lists.size()==1){
            return lists[0];
        }

        for(int i=1;i<lists.size();i++){
            lists[0]=merge(lists[0],lists[i]);
        }

        return lists[0];
        
    }
};