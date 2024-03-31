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
    int getDecimalValue(ListNode* head) {
        int count=0;
        ListNode* curr = head;
        
        while(curr){
            count++;
            curr=curr->next;
        }
        int ans=0;
        int n= count-1;
        curr=head;
        while(curr){
           ans+= curr->val*(pow(2,n));
            n--;
            curr=curr->next;
        }
        
        return ans;
    }
};