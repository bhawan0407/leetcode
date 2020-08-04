class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> ms(nums.begin(), nums.end());
        
        int ans = 0;
        int maxC = 0;
        
        while(!ms.empty())
        {
            auto it = ms.begin();
            
            for(int i = *it; ; i++)
            {
                auto it = ms.find(i);
                
                if(it == ms.end())
                {
                    if(ans < maxC)
                    {
                        ans = maxC;
                    }
                    
                    maxC = 0;
                    break;
                }
                else
                {
                    maxC++;
                    ms.erase(it);
                    
                }
            }
        }
        
        return ans;
        
    }
};
