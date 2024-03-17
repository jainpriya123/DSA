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
    int widthOfBinaryTree(TreeNode* root) {
        
        int ans=0;
        queue<pair<TreeNode*, long long int>>q;
        q.push({root, 0});
        
        while(q.size()){
            int n= q.size();
            long long int l, r;
            long long int prev= q.front().second;
            for(int i=0;i<n;i++){
                
                TreeNode* node= q.front().first;
                long long int index= q.front().second;
                q.pop();
                
                if(i==0) l=index-prev;
                if(i==n-1) r=index-prev;
                
                if(node->left){
                    q.push({node->left,(long long int) 2*(index-prev)+1});
                } 
                if(node->right) q.push({node->right, (long long int) 2*(index-prev)+2});
                
            }
            int x= r-l;
            ans=max(ans,x+1);
        }
        return ans;
    }
    
};