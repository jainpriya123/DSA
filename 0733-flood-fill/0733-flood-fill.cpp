class Solution {
public:
    int dx[4]= {-1,1,0,0};
    int dy[4]= {0,0,-1,1};
    
    bool isvalide(vector<vector<int>>& arr, int sr, int sc, int color, int temp){
        int n=arr.size();
        int m=arr[0].size();
        
        if(sr>=0 && sc>=0 && sr<n && sc<m && arr[sr][sc]==temp && arr[sr][sc]!=color){
            // cout<<"sr "<<sr<<" sc "<<sc<<endl;
            return true;
        }
        return false;
    }
    
    void solve(vector<vector<int>>& arr, int sr, int sc, int color, int temp){
        if(arr[sr][sc]==color) return;
        if(arr[sr][sc]!= temp) return;
        arr[sr][sc]= color;
        for(int i=0;i<4;i++){
            if(isvalide(arr, sr+dx[i], sc+dy[i], color, temp)){
                solve(arr, sr+dx[i], sc+dy[i] , color, temp);
            }
        }
        return;
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& arr, int sr, int sc, int color) {
                
        solve(arr, sr, sc, color, arr[sr][sc]);
        
        return arr;
    }
};