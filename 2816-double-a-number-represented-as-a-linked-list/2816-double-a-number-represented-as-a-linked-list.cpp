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
    ListNode* doubleIt(ListNode* head) {
        ListNode*temp = head;
        stack<ListNode*>st;
        
        while(temp){
            st.push(temp);
            temp=temp->next;
        }
        int carry=0;
        while(st.size()){
            ListNode* num= st.top();
            st.pop();
            num->val= num->val*2 + carry;
            carry= num->val/10;
            num->val= (num->val)%10;
        }
        ListNode* temp1=head;
        if(carry){
          temp1 = new ListNode(1);
            temp1->next= head;
        }
        return temp1;
    }
};