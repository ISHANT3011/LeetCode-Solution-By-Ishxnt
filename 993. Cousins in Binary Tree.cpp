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
    vector<pair<int,pair<int,int>>> v;
    int f = 0;
    void check(TreeNode* root,int x,int level,int parent)
    {
        if(root==NULL || f==1) return;
        if(root->val == x)
        {
            f=1;
            v.push_back({x,{parent,level}});
            return;
        }
        check(root->left,x,level+1,root->val);
        check(root->right,x,level+1,root->val);
        return;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL) return false;
        check(root,x,0,-1);
        f=0;
        check(root,y,0,-1);
        
        if(v[0].second.first!=v[1].second.first)
        {
            if(v[0].second.second==v[1].second.second)
            {
                return true;
            }
        }
        return false;
    }
};