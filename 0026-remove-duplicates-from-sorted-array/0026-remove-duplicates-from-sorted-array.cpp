class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int l=0;
        int j=1;
        while(j<a.size()){
            if(a[j]==a[l]){
                j++;
            }
            else{
                a[l+1]=a[j];
                l++;
                j++;
            }
        }
        return l+1;
    }
};