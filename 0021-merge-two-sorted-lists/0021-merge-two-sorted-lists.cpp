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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1= list1;
        ListNode* curr2= list2;
        ListNode* head2= NULL;
        ListNode* temp= NULL;
        
        if(curr1==NULL) return curr2;
        if(curr2==NULL) return curr1;
        
        
        while(curr1 && curr2){
            if(curr1->val<= curr2->val){
                if(head2==NULL){
                    head2= curr1;
                    temp= head2;
                }else{
                    temp->next= curr1;
                    temp=curr1;
                }
                curr1=curr1->next;
            }
            else{
                if(head2==NULL){
                    head2= curr2;
                    temp= head2;
                }
                else{
                    temp->next= curr2;
                    temp=curr2;
                }
                curr2= curr2->next;
            }
        }
        while(curr2){
            temp->next= curr2;
            temp=curr2;
            curr2= curr2->next;
        }
        
        while(curr1){
            temp->next= curr1;
            temp=curr1;
            curr1=curr1->next;
        }
        
        return head2;
    }
};