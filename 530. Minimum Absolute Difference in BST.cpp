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
    vector<int> ans;
    void Inorder(TreeNode* root)
    {
        if(root==NULL) {return ;}
        Inorder(root->left);
        ans.push_back(root->val);
        Inorder(root->right);
        return;
    }
    
    int getMinimumDifference(TreeNode* root) {
        Inorder(root);
        int mn = INT_MAX;
        for(int i=1;i<ans.size();i++)
        {
            if(mn>abs(ans[i-1]-ans[i]))
            {
                mn = abs(ans[i-1]-ans[i]);
            }
        }
        return mn;
    }
};