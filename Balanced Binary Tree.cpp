//Topic : Binary Tree
//Link : https://leetcode.com/problems/balanced-binary-tree/description/

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
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        else{
            return max(height(root->left), height(root->right)) +1;
        }
    }

    void check(TreeNode* root, bool &ans){
        if(root!=NULL){
            check(root->left, ans);
            int l=height(root->left);
            int r=height(root->right);
            if(abs(l-r)>1){
                ans=ans && false;
            }
            check(root->right, ans);
        }
    }

    bool isBalanced(TreeNode* root) {
        bool ans=true;
        check(root, ans);
        return ans;
    }
};