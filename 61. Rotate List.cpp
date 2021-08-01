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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        int len=1;
        ListNode *dummy=head;
        while(dummy->next!=NULL){
            dummy=dummy->next;
            len++;
        }
        k=k%len; 
        dummy->next=head;
        for(int i=0; i<len-k; i++){
            dummy=dummy->next;
        }
        ListNode *res = dummy->next;
        dummy->next=NULL;
        return res;
    }
};