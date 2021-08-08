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
    set<string> ans;
    void tr(TreeNode* root,vector<TreeNode*> curr)
    {
        if(root==NULL)
        {
            if(curr[curr.size()-1]->left==NULL && curr[curr.size()-1]->right==NULL)
            {
            string st ="";
            for(int i=0;i<curr.size();i++)
            {
                string t = to_string(curr[i]->val);
                st+= t+"->";
            }
            st.pop_back();st.pop_back();
            ans.insert(st);
            }
            return;
        }
        curr.push_back(root);
        tr(root->left,curr);
        curr.pop_back();
        curr.push_back(root);
        tr(root->right,curr);
        curr.pop_back();
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<TreeNode*> curr;
        tr(root,curr);
        vector<string> res(ans.begin(),ans.end());
        return res;
    }
};