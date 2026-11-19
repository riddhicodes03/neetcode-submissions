/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
     void findsmall(TreeNode* node,vector<int>&ar){
        if(!node)
        return;
        findsmall(node->left,ar);
        ar.push_back(node->val);
        findsmall(node->right,ar);
        
        return;
     }
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ar;
        findsmall(root,ar);
        return ar[k-1];
    }
};
