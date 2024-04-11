class Solution {
public:
vector<int> twoSum(vector<int>& a, int t) {
        vector<int> ans;
        int n=a.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(t-a[i])!=mp.end())
            {
                if(i!=mp[t-a[i]])
                {
                    ans.push_back(i);
                    ans.push_back(mp[t-a[i]]);
                    return ans;
                }
            }
        }
        return ans;
    }
    
};