class Solution {
public:

int findLive(vector<vector<int>>& arr, int row, int col){
    int n=arr.size();
    int m=arr[0].size();
    int count=0;

    if((row-1>=0 && col-1>=0) && (arr[row-1][col-1]==1 or arr[row-1][col-1]<0)){
        count++;
    }

    if(row-1>=0 && (arr[row-1][col]==1 or arr[row-1][col]<0)){
        count++;
    }

    if((row-1>=0 && col+1<m) && (arr[row-1][col+1]==1 or arr[row-1][col+1]<0)){
        count++;
    }

    if(col-1>=0 && (arr[row][col-1]==1 or arr[row][col-1]<0)){
        count++;
    }

    if(col+1<m && (arr[row][col+1]==1 or arr[row][col+1]<0)){
        count++;
    }

    if((row+1<n && col-1>=0) && (arr[row+1][col-1]==1 or arr[row+1][col-1]<0)){
        count++;
    }

    if(row+1<n && (arr[row+1][col]==1 or arr[row+1][col]<0)){
        count++;
    }

    if((row+1<n && col+1<m) && (arr[row+1][col+1]==1 or arr[row+1][col+1]<0)){
        count++;
    }

    return count;

}

    void gameOfLife(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int count= findLive(arr, i, j);

                if(arr[i][j]==0){
                    if(count==3){
                        arr[i][j]=2;
                    }
                }
                else if(arr[i][j]==1){
                    if(count<2 or count>3){
                        arr[i][j]=-2;
                    }
                    else if(count==2 or count==3){
                        arr[i][j]=1;
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==-2){
                    arr[i][j]=0;
                }

                if(arr[i][j]==2){
                    arr[i][j]=1;
                }
            }
        }
        return;       

    }
};