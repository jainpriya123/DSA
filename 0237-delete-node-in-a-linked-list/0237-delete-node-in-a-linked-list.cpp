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
        ListNode* curr= node;
        ListNode* prev=NULL;
        while(curr->next){
            ListNode* next = curr->next;
            curr->val= next->val;
            prev=curr;
            curr=next; 
        }
        if(prev) prev->next= NULL;
        return;
    }
};