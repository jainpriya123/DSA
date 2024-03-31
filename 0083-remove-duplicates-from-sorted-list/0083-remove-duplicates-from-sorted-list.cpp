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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr= head;
        ListNode* prev= curr;
        if(curr==NULL) return NULL;
        curr=curr->next;
        
        while(curr){
            ListNode* next = curr->next;
            if(curr->val==prev->val){
                prev->next= next;
            }
            else{
                prev=curr;
            }
            curr=next;
        }
        
        return head;
    }
};