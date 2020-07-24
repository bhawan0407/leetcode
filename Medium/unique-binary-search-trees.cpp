class Solution {
public:
    
    // done using TOP DOWN DP
    
    int func(int i, vector<int>& dp)
    {   
        if(dp[i] != 0)
        {
            return dp[i];
        }
    
        for(int k = 0; k <= i-1; k++)
        {
                dp[i] += (func(k, dp) * func(i-k-1, dp));
        }

        return dp[i];
        
    }
    
    
    int numTrees(int n) {        
        vector<int> dp(n+1, 0);
        
        dp[0] = 1;
        dp[1] = 1;
        
        return func(n, dp);
        
    }
};
