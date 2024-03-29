class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        int n= a.size();
        int i=0;
        while(i<n){
            if(a[i]>0 && a[i]<n+1 && a[i]!=i+1 && a[i]!=a[a[i]-1]){
                swap(a[i], a[a[i]-1]);
            }
            else{
                i++;
            }
        }
        
        for(int i=0;i<n;i++){
            if(i+1!=a[i]) return i+1;
        }
        return n+1;
    }
};