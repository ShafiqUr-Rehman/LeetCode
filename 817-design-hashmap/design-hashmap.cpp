class MyHashMap {
public:
 int mp[1000005];
    MyHashMap() {
  memset(mp,-1,sizeof(mp));
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