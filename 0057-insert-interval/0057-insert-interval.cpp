class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        
        if(n==0){
           intervals.push_back(newInterval); 
            return intervals;
        }
        int flag=0;
        if(intervals[0][0] > newInterval[1]){
                intervals.insert(intervals.begin(), newInterval);
            flag=1;
        }
        else{
            for(int i=1;i<n;i++){
            cout<<"intervals[i][0]  "<<intervals[i][0]<< "  newInterval[1]"<<newInterval[1]<<endl;
            if (intervals[i][0] > newInterval[1]){
                intervals.insert(intervals.begin() + i, newInterval);
                flag=1;
                break;
            }
            else if(intervals[i][1]>=newInterval[0]){
                intervals[i][0]= min(intervals[i][0],newInterval[0]);
                intervals[i][1]= max(intervals[i][1],newInterval[1]);
                flag=1;
                break;
            } 
        }
        }
        
        cout<<"flag  "<<flag<<endl;
        if(flag==0){
            intervals.push_back(newInterval);            
        }
        
        for(auto x: intervals){
            cout<<x[0]<<" "<< x[1]<<endl;
        }
        
        int i=0;
        int j=1;
        n= intervals.size();
        vector<vector<int>> ans;
        
        while(j<n){
            if(intervals[j][0]<=intervals[i][1]){
                intervals[i][0]= min(intervals[i][0],intervals[j][0]);
                intervals[i][1]= max(intervals[i][1],intervals[j][1]);
            }
            else{
               ans.push_back(intervals[i]);
                i++;
                intervals[i]=intervals[j];
            }
            
            j++;
        }
        ans.push_back(intervals[i]);
        
        return ans;
        
        
    }
};