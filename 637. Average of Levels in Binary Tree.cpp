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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        double sum =0;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int s = q.size();
            sum =0;
            for(int i=0;i<s;i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                sum +=(double)curr->val;
                if(curr->left){ q.push(curr->left);}
                if(curr->right){ q.push(curr->right);}
            }
            ans.push_back((double)sum/s);
        }
        return ans;
    }
};