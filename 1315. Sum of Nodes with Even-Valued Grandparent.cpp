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
    int fun(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int sum = 0;
        if(root->left!=NULL)
        {
            sum += (root->left->left!=NULL?root->left->left->val:0)+(root->left->right!=NULL?root->left->right->val:0);
        }
        if(root->right!=NULL)
        {
            sum += (root->right->left!=NULL?root->right->left->val:0)+(root->right->right!=NULL?root->right->right->val:0);
        }
        return sum;
    }
    int sumEvenGrandparent(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int sum =0;
        if(root->val%2==0)
        {
            sum +=fun(root);
        }
        
        sum += sumEvenGrandparent(root->left) + sumEvenGrandparent(root->right);
        return sum;
    }
};