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
    ListNode* reverse(ListNode* head) {
        ListNode* prev=NULL;
        while(head){
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        
        return prev;
    }
    void reorderList(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        if(!head->next) return;
        if(!head->next->next) return;
        
        do{
            slow =slow->next;
            fast = fast->next->next;
        }while(fast->next !=NULL && fast->next->next!=NULL);
        
        ListNode* mid = slow;
        
        ListNode* temp1 = head;
        ListNode* temp2 = reverse(mid->next);
        mid->next= NULL;
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        int flag=0;
        
        while(temp2){
            if(flag%2==0){
                ans->next=temp1;
                temp1=temp1->next;
                flag++;
            }
            else{
                ans->next=temp2;
                temp2=temp2->next;
                flag++;
            }
            ans=ans->next;
        }
        
        if(flag%2==0){
            ans->next=temp1;
        }
        
        head= ans->next;
        return;
    }
    
};