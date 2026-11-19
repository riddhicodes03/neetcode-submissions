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
     void findsmall(TreeNode* node,int &x, int &ans){
        if(!node)
        return;
        findsmall(node->left,x,ans);
        x--;
        if(x==0)
        ans=node->val;
        findsmall(node->right,x,ans);
        
        return;
     }
public:
    int kthSmallest(TreeNode* root, int k) {
        int x = k ;
        int ans;
        findsmall(root,x,ans);
        return ans;
    }
};
