/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        
        queue<pair<TreeNode*, char>>q;
        
        q.push({root, 'r'});
        int sum=0;
        
        while(q.size()){
            int n= q.size(); 
            for(int i=0;i<n;i++){
                TreeNode* node = q.front().first;
                char c= q.front().second;
                q.pop();
                if(c=='l' && node->left==NULL && node->right==NULL){
                    sum+=node->val;
                }
                
                if(node->left) q.push({node->left, 'l'});
                if(node->right) q.push({node->right, 'r'});
                
            }
        }
        return sum;
    }
};