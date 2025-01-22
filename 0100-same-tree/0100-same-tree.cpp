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
    bool isSameTree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL && subRoot==NULL) return true;
        if((root==NULL && subRoot!=NULL) or (root!=NULL && subRoot==NULL)) return false;
        if(root->val!=subRoot->val) return false;

        return isSameTree(root->left, subRoot->left) && isSameTree(root->right, subRoot->right);
        

    }
};

// if(!root && !subRoot) return true;
//         if(!root || !subRoot) return false;
        
//         if(root->val!=subRoot->val) return false;
        
//         return isSameTree(root->left, subRoot->left) && isSameTree(root->right, subRoot->right);