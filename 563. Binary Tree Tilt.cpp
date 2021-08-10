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
    int sum = 0;
    int find_sum(TreeNode* root)
    {
        if(root==NULL) return 0;
        if(!root->left && !root->right)
        {
            return root->val;
        }
        int l = find_sum(root->left);
        int r = find_sum(root->right);
        sum += abs(l-r);
        return l+r+root->val;
    }
    int findTilt(TreeNode* root) {
        find_sum(root);
        return sum;
    }
};