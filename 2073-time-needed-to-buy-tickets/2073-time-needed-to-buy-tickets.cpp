class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        
        int n= t.size();
        int time=0;
        int i=0;
        
        while(t[k]>0){
            if(t[i]>0){
                t[i]--;
                time++;
            }
            i++;
            if(i==n){
                i=0;
            }
        }
        
        return time;
    }
};