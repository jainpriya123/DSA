class MyHashMap {
public:
    std::vector<int>mp;
    MyHashMap() {
        mp.clear();
       for(int i=0;i<1000001;i++){
           mp.push_back(-1);
       }
       
    }
    
    void put(int key, int value) {
        mp[key]=value;
    }
    
    int get(int key) {
        return mp[key];
    }
    
    void remove(int key) {
        mp[key]=-1;
    }
};

