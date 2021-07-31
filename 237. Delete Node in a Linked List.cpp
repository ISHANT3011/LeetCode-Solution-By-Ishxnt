/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    void deleteNode(ListNode* node) {
        ListNode* temp = node->next;
        ListNode* prev = node;
        int i=1;
        while(temp!=NULL)
        {
            if(i==1)
            {
            node->val=temp->val;
            node=node->next;
            temp=temp->next;
                i--;
            }
            else
            {
                node->val=temp->val;
                node=node->next;
                temp=temp->next;
                prev=prev->next;
            }
        }
        prev->next = NULL;
        return;
    }
};