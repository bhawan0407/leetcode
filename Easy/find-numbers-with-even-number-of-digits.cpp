class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int ans = 0;
        
        for(auto num: nums)
        {
            int x = ceil(log10(num));
            
            if((int)pow(10, x) == num)
            {
                if(x&1)
                {
                    ans++;
                }
            }
            else if(!(x & 1))
            {
                ans++;
            }
        }
        
        return ans;
        
    }
};