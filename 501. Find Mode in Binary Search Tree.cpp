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
    vector<int> findMode(TreeNode* root) {
        Inorder(root);
        vector<int> res;
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
        res.push_back(ans[0]);
        int curr = 1;
        int max =1;
        int going_on_var = res[0] ;
        for(int i=1;i<ans.size();i++)
        {
            if( going_on_var == ans[i])
            {
                curr++;
                if(max<curr)
                {
                    max=curr;
                    res.clear();
                    res.push_back(going_on_var);
                }
                
            }else
            {
                going_on_var = ans[i];
                curr=1;
            }
            if(max==curr && going_on_var!=res[res.size()-1])
                {
                    res.push_back(going_on_var);
                }
        }
        return res;
    }
};