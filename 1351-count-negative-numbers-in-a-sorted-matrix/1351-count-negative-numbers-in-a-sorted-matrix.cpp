class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(grid[i][j]<0)
        //             count++;
        //     }
        // }
        
        for(int i=0;i<n;i++){
            int ind= upper_bound(grid[i].begin(), grid[i].end(), 0, std::greater<int>())-grid[i].begin(); 
            cout<<ind<<"  ";
            count+=m-ind;
        }
        
        return count;
    }
};