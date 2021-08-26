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
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        if(head==NULL)
        {
            return false;
        }
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        
        
        // to reverse
        ListNode* curr = slow;
        ListNode* prev = NULL;
        ListNode* n = NULL;
        while(curr!=NULL)
        {
            n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        }
        
        fast = head;
        slow = prev;
        
        
        while(slow)
        {
            if(slow->val != fast->val)
            {
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;
        
            
            
            
            
            
            
            
            
        // vector<int> v;
        // ListNode* temp = head;
        // while(temp!=NULL)
        // {
        //     v.push_back(temp->val);
        //     temp=temp->next;
        // }
        // int i=0;
        // int j =v.size()-1;
        // while(i<j)
        // {
        //     if(v[i]==v[j])
        //     {
        //         i++;
        //         j--;
        //         continue;
        //     }
        //     else
        //     {
        //         return false;
        //     }
        // }
        // return true;
    }
};