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
    bool hasCycle(ListNode *head) {
        ListNode* slow= head;
        ListNode* fast= head;
        if(head==NULL) return false;
        
        do{
            slow= slow->next;
            if(fast->next){
                fast= fast->next->next;
            }
        }
        while(slow && fast && fast->next && slow!=fast);
        
        if(slow==fast) return true;
        return false;
    }
};