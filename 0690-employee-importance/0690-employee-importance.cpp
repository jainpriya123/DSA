/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int bfs(map<int, int>imp, map<int,vector<int>>conn,int id){
        
        queue<int>q;
        q.push(id);
        int count=0;
        
        while(q.size()){
            int node= q.front();
            q.pop();
            
            count+= imp[node];
            
            for(auto x: conn[node]){
                q.push(x);
            }
        }
        
        return count;
    }
    int getImportance(vector<Employee*> arr, int id) {
        map<int, int>imp;
        map<int,vector<int>>conn;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            int emp= arr[i]->id;
            int importance= arr[i]->importance;
            vector<int>sub= arr[i]->subordinates;
            
            imp[emp]= importance;
            for(auto x: sub){
                conn[emp].push_back(x);
            }
        }
        int count=0;
        
        count+=bfs(imp,conn,id);
        
        return count;
    }
};