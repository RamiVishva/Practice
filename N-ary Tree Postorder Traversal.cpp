//Topic : Tree
//Link : https://leetcode.com/problems/n-ary-tree-postorder-traversal/description/

#include <bits/stdc++.h>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> ans;
    void Postorder(Node* root){
        if(root==NULL){
            return;
        }
        for(int i=0;i<root->children.size();i++){
            Postorder(root->children[i]);
        }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        Postorder(root);
        return ans;
    }
};