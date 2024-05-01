class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        
        for(int i=0;i<n;i++){
            int j;
            long long int sum1=target-arr[i];
            for(j=i+1;j<n;j++){
                long long int sum=sum1-arr[j];
                int l=j+1, h=n-1;
                
                while(l<h){
                    long long int t=arr[l]+arr[h];
                    if(t==sum){
                        vector<int>temp;
                        temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[l]);
                        temp.push_back(arr[h]);
                        ans.push_back(temp);
                        while(l+1<h && arr[l]==arr[l+1]){
                            l++;
                        }
                        l++;
                        while(h-1>l && arr[h-1]==arr[h])
                            h--;
                        h--;
                        
                    }
                    else if(t<sum){
                        while(l+1<h && arr[l]==arr[l+1]){
                            l++;
                        }
                        l++;
                    }
                    else{
                        while(h-1>l && arr[h-1]==arr[h])
                            h--;
                        h--;
                    }
                }
                while(j+1<l && arr[j]==arr[j+1]){
                            j++;
                }
            }
            while(i+1<j && arr[i]==arr[i+1]){
                            i++;
            }
        }
        
        return ans;
    }
};