class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                int sum= 0-(arr[i]+arr[j]);
                int a=j+1;
                int b=n-1;
                vector<int>temp;
                while(a<=b){
                    int mid= a+(b-a)/2;
                    if(arr[mid]==sum){
                       temp.push_back(arr[i]);
                        temp.push_back(arr[j]);
                        temp.push_back(arr[mid]);
                        ans.push_back(temp);
                        break; 
                    }
                    else if(arr[mid]<sum){
                        a=mid+1;
                    }
                    else{
                        b=mid-1;
                    }
                }
                while(j+1<n && arr[j+1] == arr[j]){
                    j++;
                }
            }
            while(i+1<n && arr[i+1] == arr[i]){
                    i++;
            }
        }
        
        return ans;
        
//         int n=arr.size();
//         sort(arr.begin(),arr.end());
//         vector<vector<int>>ans;
        
//         for(int i=0;i<n;i++){
            
//             for(int j=i+1;j<n;j++){
                
//                 for(int k=j+1;k<n;k++){
//                     vector<int>temp;
//                     if(arr[i]+arr[j]+arr[k]==0){
//                         temp.push_back(arr[i]);
//                         temp.push_back(arr[j]);
//                         temp.push_back(arr[k]);
//                         ans.push_back(temp);
//                         break;
//                     }
//                 }
//                 while(j+1<n && arr[j+1] == arr[j]){
//                     j++;
//                 }
//             }
//             while(i+1<n && arr[i+1] == arr[i]){
//                     i++;
//             }
//         }
        
//         return ans;
    }
};