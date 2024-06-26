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
    TreeNode* balancedTree(vector<TreeNode*>v, int i, int j){
        if(i>j) return NULL;
        int mid= (i+j)/2;
        
        TreeNode* root= v[mid];
        root->left= balancedTree(v, i, mid-1);
        root->right= balancedTree(v, mid+1, j);
        return root;
        
    }
    void inorder(TreeNode* root, vector<TreeNode*>&v){
        if(root==NULL) return;
        
        inorder(root->left,v);
        v.push_back(root);
        inorder(root->right,v);
        
        return;
    }
    TreeNode* balanceBST(TreeNode* root) {
        
        vector<TreeNode*>v;
        
        inorder(root, v);
        
//         for(auto x: v){
//             cout<<x->val<<" ";
//         }
        
        
        return balancedTree(v, 0, v.size()-1);
        
        return NULL;
    }
};