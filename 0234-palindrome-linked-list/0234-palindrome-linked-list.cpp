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
    bool isPalindrome(ListNode* head) {
        vector<ListNode*>v1;
        vector<ListNode*>v2;
        while(head){
            v1.push_back(head);
            head = head->next;
        }
        for( auto x: v1){
            v2.push_back(x);
        }
        
        reverse(v2.begin(),v2.end());
        
        for(int i=0;i<v1.size();i++){
            if(v1[i]->val !=v2[i]->val){
                return false;
            }
        }
        
        
        return true;
        
    }
};