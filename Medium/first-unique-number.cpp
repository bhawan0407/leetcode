class FirstUnique {
public:
    
    queue<int> q;
    
    unordered_map<int, int> mp;
    
    FirstUnique(vector<int>& nums) {
        
        for(int& num: nums)
        {
            q.push(num);
            mp[num]++;
        }
        
    }
    
    int showFirstUnique() {
        
        while(!q.empty() && mp[q.front()] > 1)
        {
            q.pop();
        }
        
        if(q.empty())
        {
            return -1;
        }
        
        return q.front();
    }
    
    void add(int value) {
        mp[value]++;
        q.push(value);
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
