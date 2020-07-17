struct Compare
{
    bool operator() (pair<int, int>& p1, pair<int, int>& p2)
    {
        return p1.second > p2.second;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> mp;
        
        for(auto num: nums)
        {
            mp[num]++;
        }
        
         priority_queue<pair<int, int>, vector<pair<int, int> >, Compare> pq;
        
        for(auto it: mp)
        {
            if(pq.size() < k)
            {
                pq.push(make_pair(it.first, it.second));
            }
            else
            {
                if(pq.top().second < it.second)
                {
                    pq.pop();
                    pq.push(make_pair(it.first, it.second));
                }
            }
        }
        
        vector<int> ans;
        
        while(pq.size() > 0)
        {
            ans.push_back(pq.top().first);
            
            pq.pop();
        }
        
        return ans;
            
    }
};
