class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
        
        // vector<int>row(n, -1);
        // vector<int>col(m,-1);
        
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(arr[i][j]==0){
        //             row[i]=0;
        //             col[j]=0;
        //         }
        //     }
        // }
        
        // for(int i=0;i<n;i++){
        //     if(row[i]==0){
        //         for(int j=0;j<m;j++){
        //             arr[i][j]=0;
        //         }
        //     }
        // }
        
        // for(int j=0;j<m;j++){
        //     if(col[j]==0){
        //         for(int i=0;i<n;i++){
        //             arr[i][j]=0;
        //         }
        //     }
        // }
        
        // return;
        int row=-1;
        int col=-1;
        for(int j=1;j<m;j++){
            if(arr[0][j]==0){
                row=0;
            }
        }

        for(int i=1;i<n;i++){
            if(arr[i][0]==0){
                col=0;
            }
        }


        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(arr[i][j]==0){
                    arr[i][0]=0;
                    arr[0][j]=0;
                }
            }
        }

        for(int j=1;j<m;j++){
            if(arr[0][j]==0){
                for(int i=1;i<n;i++){
                    arr[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<n;i++){
            if(arr[i][0]==0){
                for(int j=1;j<m;j++){
                    arr[i][j]=0;
                }
            }
        }

        if(arr[0][0]==0){
            for(int i=0;i<n;i++){
                arr[i][0]=0;
            }

            for(int j=0;j<m;j++){
                arr[0][j]=0;
            }
        }

        if(row==0){
            for(int j=0;j<m;j++){
                arr[0][j]=0;
            }
        }

        if(col==0){
            for(int i=0;i<n;i++){
                arr[i][0]=0;
            }

        }
        return;
    }
};