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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* curr=head->next;
        ListNode* top = curr;
        ListNode* prev = head;
        ListNode* temp = curr->next;
        while(1)
        {
            temp = curr->next;
            curr->next=prev;
            if(temp!=NULL && temp->next==NULL )
            {
            prev->next= temp;
            }else if(temp==NULL)
            {
                prev->next=temp;
            }
            else
            {
                prev->next= temp->next;
            }
            if(temp!=NULL && temp->next!=NULL)
            {
                curr=temp->next;
                prev=temp;
            }
            else
            {
                break;
            }
            
        }
        return top;
    }
};