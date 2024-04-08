class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sand) {
        int st1=0;
        int st0=0;
        
        for(int i=0;i<st.size();i++){
            if(st[i]==0){
                st0++;
            }
            else{
                st1++;
            }
        }
        
        for(int i=0;i<sand.size();i++){
            if(sand[i]==0){
                if(st0>0){
                    st0--;
                }
                else{
                    break;
                }
            }
            else if(sand[i]==1){
                if(st1>0){
                    st1--;
                }
                else{
                    break;
                }
            }  
        }
        
        return st0+st1;
    }
};