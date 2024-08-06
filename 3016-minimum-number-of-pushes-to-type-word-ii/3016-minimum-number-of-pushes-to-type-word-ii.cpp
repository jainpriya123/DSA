class Solution {
public:
    int minimumPushes(string word) {
        map<char, int>mp;
        vector<int>v;
        
        for(auto x: word){
            mp[x]++;
        }
        
        if(mp.size()<=8){
            return word.length();
        }
        
        for(auto x: mp){
            v.push_back(x.second);
        }
        
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        
        int count=1;
        
        int eight= 0;
        int sum=0;
        
        for(auto x: v){
            sum+= x*count;
            eight++;
            
            if(eight==8){
                eight=0;
                count++;
            }
            
        }
        
        return sum;
        
    }
};