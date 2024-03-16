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
    int sumRoot(TreeNode* root, long long sum){
        long long count=0;
        
        if(root==NULL){
            return count;
        }
        
        if(sum-root->val==0) count++;
        return sumRoot(root->left,sum-root->val) + sumRoot(root->right,sum-root->val)+count;
        
    }
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL){
            return 0;
        }
        
        return pathSum(root->left,sum) + pathSum(root->right,sum) + sumRoot(root,sum);
    }
};