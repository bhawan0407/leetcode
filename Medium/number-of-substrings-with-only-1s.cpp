class Solution {
public:
    int numSub(string s) {
        
        int i = 0;
        int n = s.length();
        long long count = 0;
        
        long long ans = 0;
        
        
        while(i < n)
        {
            if(s[i] == '1')
            {
                while(i < n && s[i] == '1')
                {
                    i++;
                    count++;
                }
                
                ans = (ans + ((count) * (count+1))/2) % 1000000007;
                count = 0;
            }
            else
            {
                i++;
            }
        }
        
        return ans;
        
    }
};
