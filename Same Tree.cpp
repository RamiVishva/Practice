//Topic : Binary Tree
//Link : https://leetcode.com/problems/same-tree/description/

#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
   
    void inorder(TreeNode* root, vector<int> &v){
        if(root!=NULL){
            inorder(root->left, v);
            v.push_back(root->val);
            inorder(root->right, v);
        }
        else{
            v.push_back(100000);
        }
    }

    void preorder(TreeNode* root, vector<int> &v){
        if(root!=NULL){

            v.push_back(root->val);
            preorder(root->left, v);
            preorder(root->right, v);
        }
        else{
            v.push_back(100000);
        }
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> p1, prep1;
        vector<int> q1, preq1;
        inorder(p, p1);
        inorder(q, q1);

        preorder(p, prep1);
        preorder(q, preq1);

        if(p1 == q1 && prep1 == preq1){
            return true;
        }    
        else{
            return false;
        }
    }
};