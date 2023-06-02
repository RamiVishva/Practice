//Topic : Binary Tree
//Link : https://leetcode.com/problems/diameter-of-binary-tree/description/

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
    int ans=0;
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }

        int l=height(root->left);
        int r=height(root->right);

        ans=max(ans,1+l+r);

        return 1+ max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d=height(root);

        return ans-1;
    }
};