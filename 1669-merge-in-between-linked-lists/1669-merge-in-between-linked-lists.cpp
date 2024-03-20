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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
     
        ListNode* temp = list1;
        ListNode* first = NULL;
        ListNode* second = NULL;
        int i=0;
        while(temp){
            
            if(i==a-1){
                first= temp;
            }
            if(i==a){
                first->next = list2;
            }
            
            if(i==b){
                second= temp->next;
            }
            i++;
            temp=temp->next;
        }
        
        while(first->next){
            first=first->next;
        }
        
        first->next = second;
        
        return list1;
        
        
    }
};