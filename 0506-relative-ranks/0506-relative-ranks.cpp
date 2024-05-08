class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& arr) {
        priority_queue<pair<int,int>>pq;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            pq.push({arr[i], i});
        }
        int count=0;
        vector<string> ans(n);
        
        while(pq.size()>0){
            count++;
            if(count==1){
              ans[pq.top().second]="Gold Medal";  
            }
            else if(count==2){
                ans[pq.top().second]="Silver Medal";
            }
            else if(count==3){
                ans[pq.top().second]="Bronze Medal";
            }
            else{
                ans[pq.top().second]= to_string(count);
            }
            
            pq.pop();
            
        }
        
        return ans;
    }
};