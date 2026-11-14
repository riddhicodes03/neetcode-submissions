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
    int countNodes(TreeNode* node, int maxVal){
    if(!node)return 0;
        int newMax = max(maxVal,node->val);
        int lh = countNodes(node->left,newMax);
        int rh = countNodes(node->right,newMax);

     if(maxVal<=node->val) 
     return 1 + lh + rh;
     else return lh+rh;
     

    }
public:
    int goodNodes(TreeNode* root) {
        if(!root)
        return 0;
        int count = countNodes(root,INT_MIN);
        return count;
    }
};
