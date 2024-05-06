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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st;
        
        ListNode* temp = head;
        st.push(temp);
        temp=temp->next;
        
        while(temp){
            ListNode* prev= st.top();
            while(st.size() && temp->val>prev->val){
                st.pop();
                if(st.size()>0){
                    prev= st.top();
                    if(prev)
                       prev->next= temp;
                }
               
            }
            st.push(temp);  
            temp=temp->next;
        }
        
        ListNode* prev=head;
        while(st.size()){
           prev= st.top();
            st.pop();
        }
        
        return prev;
    }
};