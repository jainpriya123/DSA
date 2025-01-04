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
//     ListNode* reverseList(ListNode* head) {
       
//         ListNode* curr = head;
//         ListNode* prev= NULL;
//         while(curr){
//             ListNode* next = curr->next;
//             curr->next = prev;
//             prev= curr;
//             curr=next;
//         }
        
//         return prev;
//     }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        // ListNode* head1= reverseList(l1);
        // ListNode* head2= reverseList(l2);
        
        ListNode* head1= l1;
        ListNode* head2= l2;
        
        ListNode* head= NULL;
        
        ListNode* temp= NULL;
        int carry=0;
        
        while(head1 && head2){
            int val= carry+ head1->val+ head2->val;
            carry= val/10;
            int div= val%10;
            
            ListNode* node= new ListNode(div);
            
            if(head==NULL){
                head= node;
                temp= node;
            }
            else{
                temp->next = node;
                temp=node;
            }
            
            head1= head1->next;
            head2= head2->next;
                        
        }
        
        while(head1){
            int val= carry+head1->val;
            int div= val%10;
            carry= val/10;
            
            ListNode* node= new ListNode(div);
            temp->next = node;
            temp=node;
            
            head1= head1->next;
        }
        
        while(head2){
            int val= carry+head2->val;
            int div= val%10;
            carry= val/10;
            
            ListNode* node= new ListNode(div);
            temp->next = node;
            temp=node;
            
            head2= head2->next;
        }
        
        if(carry==1){
            ListNode* node= new ListNode(1);
            temp->next = node;
            temp=node;
        }
        
        return head;
    }
};