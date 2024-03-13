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
    
//     void solve(TreeNode* root, int maxi, int node, int &ans){
//         if(!root) return;
//         if(root->val< node || root->val< maxi) return;
        
//         ans++;
//         int x = maxi;
//         if(root->val > maxi)
//             maxi = root->val;
//         solve(root->left, maxi, node, ans);
//         solve(root->right, maxi, node, ans);
        
//         maxi = x;
        
//         return;
//     }
    
//     int goodNodes(TreeNode* root) {
//         if(!root) return 0;
//         int maxi = root->val;
//         int nodeval = root->val;
//         int ans=0;
//         solve(root, maxi, nodeval, ans);
        
//         return ans;
//     }
    
    void solve(TreeNode* root, int maxi, int &ans){
        if(!root) return;
        
        if(root->val>= maxi)
         ans++;
        int x = maxi;
        if(root->val > maxi)
            maxi = root->val;
        solve(root->left, maxi, ans);
        solve(root->right, maxi, ans);
        
        maxi = x;
        
        return;
    }
    
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        int maxi = root->val;
        int ans=0;
        solve(root, maxi, ans);
        
        return ans;
    }
};