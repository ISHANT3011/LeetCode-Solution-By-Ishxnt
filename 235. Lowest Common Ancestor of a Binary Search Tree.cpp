/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if((root->val>=p->val and root->val<=q->val ) or (root->val>=q->val and root->val<=p->val ) )
        {
            return root;
        }
        else if(root->val>p->val and root->val>q->val)
        {
            return lowestCommonAncestor(root->left,p,q);
        }
        return lowestCommonAncestor(root->right,p,q);
//         vector<TreeNode*> P_p,P_q;
//         TreeNode* temp = root;
//         while(temp!=NULL)
//         {
//             if(p->val>temp->val)
//             {
//                 P_p.push_back(temp);
//                 temp=temp->right;
                
//             }
//             else if(p->val<temp->val)
//             {
//                 P_p.push_back(temp);
//                 temp = temp->left;
//             }
//             else
//             {
//                 P_p.push_back(temp);
//                 break;
//             }
//         }
//         temp = root;
//         while(temp!=NULL)
//         {
//             if(q->val>temp->val)
//             {
//                 P_q.push_back(temp);
//                 temp=temp->right;
                
//             }
//             else if(q->val<temp->val)
//             {
//                 P_q.push_back(temp);
//                 temp = temp->left;
//             }
//             else
//             {
//                 P_q.push_back(temp);
//                 break;
//             }
//         }
//         int n = P_p.size();
//         int m = P_q.size();
//         if(n<m)
//         {
//             for(int i=n-1;i>=0;i--)
//             {
//                 for(int j=m-1;j>=0;j--)
//                 {
//                     if(P_p[i]->val==P_q[j]->val)
//                     {
//                         return P_p[i];
//                     }
//                 }
//             }
//         }
//         else
//         {
//             for(int i=m-1;i>=0;i--)
//             {
//                 for(int j=n-1;j>=0;j--)
//                 {
//                     if(P_q[i]->val==P_p[j]->val)
//                     {
//                         return P_p[j];
//                     }
//                 }
//             }
//         }
//         return root;
    }
};