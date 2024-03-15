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
    void solve(TreeNode* root, TreeNode* node, string temp, vector<string> &ans){
        if(root==NULL) return;
        if(root==node){
            temp+=to_string(root->val);
        }
        else{
            temp+="->";
            temp+=to_string(root->val);
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(temp);
            return;
        }
        
        solve(root->left, node, temp, ans);
        solve(root->right, node, temp, ans);
        
        return;
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string temp="";
        if(root==NULL) return ans;
        
        solve(root, root, temp, ans);
        
        return ans;
        
    }
};