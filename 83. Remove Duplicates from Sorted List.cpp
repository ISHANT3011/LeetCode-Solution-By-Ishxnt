/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void remove(ListNode* &prev,ListNode* &curr)
    {
        ListNode* temp = curr->next;
        //free(curr);
        curr = temp;
        prev->next=temp;
        return;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        ListNode* curr = head->next;
        ListNode* prev = head;
        int f =0;
        while(curr!=NULL)
        {
            if(curr->val == prev->val)
            {
                cout<<curr->val<<endl;
                remove(prev,curr);
                f=0;
            }
            else
            {
                f=1;
            }
            if(f)
            {
            prev=prev->next;
            curr=curr->next;
            }
        }
        return head;
    }
};