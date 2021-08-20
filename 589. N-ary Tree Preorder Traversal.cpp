/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> ans;
    void Preorder(Node* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        
        ans.push_back(root->val);
        for(int i=0;i<root->children.size();i++)
        {
        Preorder(root->children[i]);
        }
        return;
    }
    vector<int> preorder(Node* root) {
        Preorder(root);
        return ans;
    }
};