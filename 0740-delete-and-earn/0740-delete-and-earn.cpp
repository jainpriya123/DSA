class Solution {
public:
    int deleteAndEarn(vector<int>& arr) {
                
        vector<int>v(10e4, 0);
        
        for(int i=0;i<arr.size();i++){
             v[arr[i]]++;
        }
        
        int in= v[0]*0;
        int ex=0;
        int ex_new=0;
        for(int i=1;i<v.size();i++){
            ex_new= max(in,ex);
            
            in= ex + v[i]*i;
            ex= ex_new;
        }
        
       return max(in,ex);
        
    }
};