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
    TreeNode* searchBST(TreeNode* root, int val) {
        while(1)
        {
            if(root->val == val)
            {
                return root;
            }
            else if(root->val<val)
            {
                if(root->right==NULL)
                {
                    TreeNode * l =NULL;
                    return NULL;
                }
                return searchBST(root->right,val);
            }
            else
            {
                if(root->left==NULL)
                {
                    TreeNode * l =NULL;
                    return l;
                }
                return searchBST(root->left,val);
            }
        }
    }
};