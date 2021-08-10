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
    int f =0;
    void traverse(TreeNode* root, TreeNode* root1)
    {
        if(root==NULL && root1==NULL){ return;}
        if( (root==NULL && root1!=NULL) || (root!=NULL && root1==NULL) )
        {
            f=1;
            return;
        }
        traverse(root->left,root1->left);
        if(root->val != root1->val){ f=1;return; }
        if(f){ return;}
        traverse(root->right,root1->right);
        return ;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        traverse(p,q);
        if(f) return false;
        return true;
    }
};