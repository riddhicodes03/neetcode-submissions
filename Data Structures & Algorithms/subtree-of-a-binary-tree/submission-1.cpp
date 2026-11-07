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
public:
bool sameTree(TreeNode *p, TreeNode *q){
    if(!p || !q)
    return p==q;
    bool ans = sameTree(p->left,q->left) && sameTree(p->right,q->right);
    if(p->val!=q->val)
    ans = false;
    return ans;
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)
        return false;
        if(!subRoot)
        return true;
        
        return sameTree(root,subRoot)||isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
        
    }
};
