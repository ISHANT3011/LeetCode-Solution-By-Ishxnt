/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
//         if(!root)return root;
// queue<Node* >Q;
// Q.push(root);
// while(!Q.empty()){

//         int n = Q.size();
//         for(; n>0; n--){
//             Node* curr = Q.front();
//             Q.pop();
//             if(n==1)curr->next=NULL;
//             else{
//                 curr->next=Q.front();
//             }
//             if(curr->left)Q.push(curr->left);
//             if(curr->right)Q.push(curr->right);
//         }
//     }
//     return root;
        queue<Node*> q;
        if(root==NULL) return root;
        q.push(root);
        while(!q.empty())
        {
            int s = q.size();
            for(int i =s;i>0;i--)
            {
                Node* curr = q.front();
                q.pop();
                if(i==1) curr->next=NULL;
                else
                {
                    curr->next=q.front();
                }
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
            }
        }
        return root;
    }
};