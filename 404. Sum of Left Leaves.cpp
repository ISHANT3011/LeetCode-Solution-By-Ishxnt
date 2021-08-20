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
    
    int sum=0;
    
    void solve(TreeNode* root){
        
        if(root->left==NULL && root->right==NULL)
            
            return;
        
        if(root->left){
            
            if(root->left->left==NULL && root->left->right==NULL)
                
                sum=sum+root->left->val;
            
            else
                
                solve(root->left);
        }
        
        if(root->right)
            
            solve(root->right);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
       
       if(!root)return NULL;
        
        solve(root);
        
        return sum;
        
        
    }
};