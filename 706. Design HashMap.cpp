class MyHashMap {
public:
    vector<vector<pair<int,int>>> v;
    int ms =2021;
    /** Initialize your data structure here. */
    MyHashMap() {
        v.clear();
        v.resize(2021);
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        int k = key%ms;
        if(v[k].size()==0)
        {
            v[k].push_back({key,value});
            return;
        }else
        {

            for(int i=0;i<v[k].size();i++)
            {
                if(v[k][i].first==key)
                {
                    v[k][i].second = value;
                    return;
                }
            }
            v[k].push_back({key,value});
        }
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        int k = key%ms;
        for(int i=0;i<v[k].size();i++)
            {
                if(v[k][i].first==key)
                {
                    return v[k][i].second;
                }
            }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int k = key%ms;
        for(int i=0;i<v[k].size();i++)
            {
                if(v[k][i].first==key)
                {
                    v[k].erase(v[k].begin()+i);
                    return;
                }
            }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */