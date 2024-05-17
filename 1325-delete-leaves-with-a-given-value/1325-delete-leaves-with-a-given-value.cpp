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
    bool solve(TreeNode* root, int t, TreeNode* par, int i){
        if(root==NULL) return false;
        
        if(root->left ==NULL && root->right==NULL){
            if(root->val==t){
                if(i==0) par->left=NULL;
                else{
                    par->right= NULL;
                }
                return true;
            }
            return false;
        }
        
        bool left = solve(root->left, t, root, 0);
        bool right = solve(root->right, t, root, 1);
        
        if(root->left ==NULL && root->right==NULL){
            if(root->val==t){
                if(i==0) par->left=NULL;
                else{
                    if(par) par->right= NULL;
                    else root= NULL;
                }
                return true;
            }
        }
        return false;
        
    }
    TreeNode* removeLeafNodes(TreeNode* root, int t) {
        
        if(root->left ==NULL && root->right==NULL){
            if(root->val==t) return NULL;
        }
        solve(root, t, NULL, -1);
        
        if(root->left ==NULL && root->right==NULL){
            if(root->val==t) return NULL;
        }
        
        return root;
    }
};