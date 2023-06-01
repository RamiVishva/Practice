//Topic : Binary Tree
//Link : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

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
    TreeNode* tree(vector<int>&nums, int s,int e){
        int m=(s+e)/2;
        if(s>e){
            return NULL;
        }
        TreeNode* root =new TreeNode(nums[m]);
        root->left = tree(nums, s, m-1);
        root->right = tree(nums,m+1,e);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        TreeNode* p=tree(nums, 0, n-1);
        return p;
    }
};