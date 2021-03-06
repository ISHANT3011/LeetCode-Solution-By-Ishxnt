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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        while(temp!=NULL)
        {
            temp=temp->next;
            len++;
        }
        if(len==1)
        {
            if(n>=1)
            {
                return NULL;
            }
            else
            {
                return head;
            }
        }
        n = len - n +1;
        if(n==1)
        {
            return head->next;
        }
        temp = head;
        ListNode* p = NULL;
        n--;
        while(n--)
        {
            p = temp;
            temp=temp->next;
        }
        p->next = temp->next;
        return head;
    }
};