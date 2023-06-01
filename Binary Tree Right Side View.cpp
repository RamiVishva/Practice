//Topic : Binary Tree
//Link : https://leetcode.com/problems/binary-tree-right-side-view/description/?envType=list&envId=retrjm33

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
    vector<int> ans;
    void rightval(TreeNode* root, int l){
        if(root==NULL){
            return;
        }
        if(ans.size()==l){
            ans.push_back(root->val);
        }
        rightval(root->right,l+1);
        rightval(root->left,l+1);
        
    }

    vector<int> rightSideView(TreeNode* root) {
        if(!root){
            return {};
        }

        rightval(root,0);
        
        return ans;
    }
};