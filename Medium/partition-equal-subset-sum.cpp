class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int s = 0;
        
        for(int& n: nums)
        {
            s += n;
        }
        
        if(s&1)
        {
            return false;
        }
        
        int n = nums.size();
        int sm = s/2;
        
        vector<vector<int>> dp(n+1, vector<int>(sm+1, 0));
        
        //int dp[n+1][sm+1]; // = {{0}};
        
        
        for(int i = 0; i <= n; i++)
        {
            dp[i][0] = 1;
        }
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= sm; j++)
            {
                if((dp[i-1][j] == 1) || 
                   ((j-nums[i-1] >= 0) && (dp[i-1][j-nums[i-1]] == 1)))
                {
                    dp[i][j] = 1;
                }
            }
        }
        
        
        return dp[n][sm];
        
    }
};
