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
    bool solve(TreeNode* root, long l, long h){
        if(root==NULL) return true;
        
        if(root->val<= l || root->val>=h){
           
            return false;
        }
        
        bool lefti = solve(root->left, l, root->val);
        bool righti = solve(root->right, root->val, h);
        
        return lefti && righti;
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        
        return solve(root, LONG_MIN, LONG_MAX);
    }
};