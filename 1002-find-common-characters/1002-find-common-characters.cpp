class Solution {
public:
    vector<string> commonChars(vector<string>& arr) {
        map<char, int>mp;
        int n=arr.size();
        
        for(auto x: arr[0]){
            mp[x]++;
        }
        
        
        for(int i=1;i<n;i++){
            map<char, int>temp;
            
            for(auto y: arr[i]){
                temp[y]++;
            }
            
            for(auto x: mp){
                mp[x.first]= min(x.second, temp[x.first]);
            }
        }
        // string s;
        // for(auto x: mp){
        //     cout<<x.first<<"  "<<x.second<<endl;
        //     
        //     cout<<s<<endl;
        // }
        
        vector<string>ans;
        
        for(auto x: mp){
            for(int i=0;i<x.second;i++){
                string s;
                s.push_back(x.first);
                ans.push_back(s);
            }
        }
        
        return ans;
        
    }
};