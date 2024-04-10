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
    // vector<int> twoSum(vector<int>& a, int t) {
    //     map<int,vector<int>>mp;
    //     vector<int> v;

    //     int n=a.size();
    //     for(int i=0;i<n;i++){
    //         mp[a[i]].push_back(i);
    //     }

    //     for(int i=0;i<n;i++){
    //         if(mp.find(t-a[i])!=mp.end()){
    //             if(mp[t-a[i]][0]!=mp[a[i]][0]){
    //                 v.push_back(mp[t-a[i]][0]);
    //                 v.push_back(mp[a[i]][0]);
    //                 return v;
    //             }
    //         }
    //     }
    //     return mp[t/2];

    // }
};