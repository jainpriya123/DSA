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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*, TreeNode*>par;
        queue<TreeNode*> q1;
        vector<int>ans;
        
        par[root]=NULL;
        q1.push(root);
        while(q1.size()>0){
            int n=q1.size();
            for(int i=0;i<n;i++){
                TreeNode* temp= q1.front();
                q1.pop();
                if(temp->left){
                    par[temp->left]= temp;
                    // cout<<temp->left->val<<"  "<<temp->val<<endl;
                    q1.push(temp->left);
                }
                if(temp->right){
                    par[temp->right]= temp;
                    // cout<<temp->right->val<<"  "<<temp->val<<endl;
                    q1.push(temp->right);
                }
            }
        }
        
        int d=0;
        queue<TreeNode*> q;
        map<TreeNode*, int>vis;
        
        q.push(target);
        vis[target]=1;
        
        while(q.size()){
            int n= q.size();
            for(int i=0;i<n;i++){
                
                TreeNode* temp= q.front();
                cout<<"q.front()  "<<temp->val<<endl;
                q.pop();
                if(d==k){
                    ans.push_back(temp->val);
                }
                else if(d<k){
                    if(par[temp] && vis[par[temp]]==0){
                        q.push(par[temp]);
                        cout<<par[temp]->val<<"  ";
                        vis[par[temp]]=1;
                    }
                     if(temp->left && vis[temp->left]==0){
                         q.push(temp->left);
                         cout<<temp->left->val<<"  ";
                         vis[temp->left]=1;
                    }
                    if(temp->right && vis[temp->right]==0){
                         q.push(temp->right);
                        cout<<temp->right->val<<"  ";
                         vis[temp->right]=1;
                    }
                } 
            }    
            cout<<endl;
            d++; 
        }
        
        return ans;
        
    }
};