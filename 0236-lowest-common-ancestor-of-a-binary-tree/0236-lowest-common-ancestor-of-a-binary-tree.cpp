/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    TreeNode* findPath(TreeNode* root, TreeNode* p, TreeNode* q){
        
        if(root==NULL) return NULL;
        
        if(root==p){
            return p;
        }
        if(root==q){
            return q;
        }
        
   TreeNode* x1 = findPath(root->left, p, q);
   TreeNode* x2 = findPath(root->right, p, q);
        
       if(x1==NULL && x2 == NULL) return NULL;
        if(x1 == NULL) return x2;
        if(x2 == NULL) return x1;
        return root;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(!root) return NULL;
        
       return findPath(root, p, q);
        
        
    }
};