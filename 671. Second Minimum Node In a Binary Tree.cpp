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
    vector<int> v;
    void solve(TreeNode* root)
    {
        if(root==NULL ){ return;}
        solve(root->left);
        v.push_back(root->val);
        solve(root->right);
        return;
    }
    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL ){ return 0;}
    
        solve(root);
        sort(v.begin(),v.end());
        int x = v[0];
        int i=1;
        cout<<v.size();
        cout<<x;
        while(i<v.size())
        {
            if(x<v[i])
            {
                x = v[i];
                break;
            }
            i++;
        }
        
        return x==v[0]?-1:x;
    }
};