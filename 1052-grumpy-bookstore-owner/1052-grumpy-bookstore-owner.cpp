class Solution {
public:
    int maxSatisfied(vector<int>& a, vector<int>& g, int k) {
        int maxi=0;
        int sum=0;
        int j=0;
        int i=0;
        int n=g.size();
        
        while(j<n){
            if(g[j]==1){
                    sum+=a[j];
            }
            
            if(j-i+1>k){
                if(g[i]==1){
                    sum-=a[i];
                }
                i++;
            }
            maxi=max(maxi,sum);
            j++;
        }
        
        
        for(int i=0;i<n;i++){
            if(g[i]==0){
                maxi+=a[i];
            }
        }
        
        return maxi;
        
    }
};