class Solution {
public:
    int titleToNumber(string s) {
        
        long long a = 1;
        int n = s.length();
        
        int ans = 0;
        
        for(int i = n-1; i >= 0; i--)
        {
            ans += a*(s[i] - 'A' + 1);
            a *= 26;
        }
        
        return ans;
    }
};
