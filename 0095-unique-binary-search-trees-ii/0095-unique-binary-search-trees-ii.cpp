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
    vector<TreeNode*> helper(int s, int e){
        
        if(s>e){
           vector<TreeNode*>base;
            base.push_back(NULL);
            return base;
        }
        vector<TreeNode*>ans;
        for(int i=s;i<=e;i++){
            vector<TreeNode*>lefti = helper(s, i-1);
            vector<TreeNode*>righti = helper(i+1, e);
            
            for(auto x: lefti){
                for(auto y : righti){
                    TreeNode* root = new TreeNode(i);
                    ans.push_back(root);
                    root->left = x;
                    root->right = y;
                }
            }
        }
        return ans;
        
    }
    vector<TreeNode*> generateTrees(int n) {
        
        vector<TreeNode*>ans;
        
        if(n==1){
            TreeNode* root = new TreeNode(n);
            ans.push_back(root);
            return ans;
        } 
        
        return helper(1, n);
    }
};