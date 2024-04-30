class Solution {
public:
    int dx[4] = {-1,0,1,0};
    int dy[4] = {0,1,0,-1};
    
    bool isvalid(vector<vector<char>>& arr, string word, vector<vector<int>>&vis, int i, int j, int w){
        int n=arr.size();
        int m= arr[0].size();
        
        if(i>=0 && j>=0 && i<n && j<m && vis[i][j]==0 && word[w]==arr[i][j]){
            return true;
        }
        return false;
    }
    
    bool solve(vector<vector<char>>& arr, string word, vector<vector<int>>&vis, int i, int j, int w){
        vis[i][j] = 1;
        // cout<<"Word "<<word[w]<<"  ";
        // cout<<arr[i][j]<<" ";
        if(w==word.length()-1) 
            return true;
        
        
        for(int k=0;k<4;k++){
            if(isvalid(arr, word, vis, i+dx[k], j+dy[k], w+1)){
                // cout<<"w "<<w<<endl;
                if(solve(arr, word, vis, i+dx[k], j+dy[k], w+1))
                    return true;
            }
        }
        vis[i][j] = 0;
        return false;
    }
    
    bool exist(vector<vector<char>>& arr, string word) {
        int n=arr.size();
        int m= arr[0].size();
        
        vector<vector<int>>vis(n, vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && word[0]==arr[i][j]){
                    if(solve(arr, word, vis, i, j, 0)) 
                        return true;
                }
            }
        }
        
        return false;
    }
};