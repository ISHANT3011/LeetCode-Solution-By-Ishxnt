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
    int mxDepth(TreeNode* root)
    {
        if(!root) return 0;
        int l = mxDepth(root->left);
        int r = mxDepth(root->right);
        return max(l,r)+1;
    }
    vector<TreeNode*> generateTrees(int n,int h=1) {
        vector<TreeNode*> v,v1,v2;
        if(h>n) return {NULL};
        for(int i=h;i<=n;i++)
        {
            v1=generateTrees(i-1,h);
            v2=generateTrees(n,i+1);
            for(auto x : v1)
            {
                for(auto y : v2)
                {
                    TreeNode* root = new TreeNode(i);
                    root->left = x;
                    root->right = y;
                    //if(mxDepth(root)<=3){v.push_back(root);}
                    v.push_back(root);
                }
            }
        }
        return v;
    }
};