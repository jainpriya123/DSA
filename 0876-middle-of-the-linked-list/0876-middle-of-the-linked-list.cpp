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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast= head;
        if(head->next==NULL) return head;
        do{
            slow=slow->next;
            if(fast->next){
                fast=fast->next->next;
            }
        }
        while(slow && fast && fast->next);
        
        return slow;
    }
};