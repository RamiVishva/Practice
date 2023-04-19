//Topic : Binary Tree
//Link : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
            return ans;
        }
        int c=1;
        while(1){
            int s=q.size();
            if(s==0){
                return ans;
            }
    
            vector<int> data;
            while(s>0){
                TreeNode *temp=q.front();
                q.pop();
                data.push_back(temp->val);
                if(temp->left != NULL){
                        q.push(temp->left);
                }
                
                if(temp->right != NULL){
                        q.push(temp->right);
                }
                
                s--;
            }
            if(c%2==0){
                reverse(data.begin(),data.end());
            }
            c++;
            ans.push_back(data);
            
        }
        return ans;
    }
};