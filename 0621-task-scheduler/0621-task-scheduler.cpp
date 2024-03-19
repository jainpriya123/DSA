class Solution {
public:
    int leastInterval(vector<char>& arr, int n) {
        priority_queue<int>pq;
        vector<int>v(26,0);
        int time=0;
        for(auto x: arr){
            v[x-'A']++;
        }
        
        for(int i=0;i<26;i++){
            if(v[i]>0){
                pq.push(v[i]);
            }
        }
        
        while(pq.size()){
            vector<int>temp;
            
            for(int i=1;i<=n+1;i++){
                if(pq.size()>0){
                    int freq= pq.top();
                    pq.pop();
                    freq--;
                    temp.push_back(freq);
                }
                
            }
            
            for(auto x: temp){
                if(x>0){
                    pq.push(x);
                }
            }
            
            if(pq.size()==0){
                time+= temp.size();
            }
            else{
                time+=n+1;
            }
        }
        
        return time;
        
    }
};