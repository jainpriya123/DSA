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
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        map<int, int>posti;
        for(int i=0;i<post.size();i++){
            posti[post[i]]=i;
        }
        map<int, int>prei;
        for(int i=0;i<pre.size();i++){
            prei[pre[i]]=i;
        }
        map<int, int>vis;
        
        queue<TreeNode*> q;
        TreeNode* root = new TreeNode(pre[0]);
        q.push(root);
        vis[pre[0]]=1;
        
        while(q.size()){
            int n= q.size();
            
            for(int i=0;i<n;i++){
               TreeNode* node = q.front();
                q.pop();
                int next_index= prei[node->val]+1;
                if(next_index<pre.size() && vis[pre[next_index]]==0){
                    TreeNode* lefti = new TreeNode(pre[next_index]);
                    node->left = lefti;
                    q.push(lefti);
                    vis[pre[next_index]]=1;
                }
                
                int pre_index= posti[node->val]-1;
                if(pre_index >=0 && vis[post[pre_index]]==0){
                    TreeNode* righti = new TreeNode(post[pre_index]);
                    node->right = righti;
                    q.push(righti);
                    vis[post[pre_index]]=1;
                }
                
            }
            
        }
        
        return root;
    }
};