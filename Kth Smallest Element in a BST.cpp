//Topic : Binary Tree
//Link : https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/

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
    vector<int> v;
    void inorder(TreeNode *root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        sort(v.begin(),v.end());
        int t=v[k-1];
        return t;
    }
};