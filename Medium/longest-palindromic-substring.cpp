class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.length();
        int ans = 0; 
        int count = 0;
        int x = 0;
        int y = 0;
        int j,k;
        
        for(int i = 0; i < n; i++)
        {
            k = i;
            j = i;
            
            count = -1;
            
            while(k >= 0 && j < n && s[k] == s[j])
            {
                count += 2;
                
                if(ans < count)
                {
                    ans = count;
                    x = k;
                    y = j;
                }
                
                k--;
                j++;
            }
            
            k = i;
            j = i+1;
            
            count = 0;
            
            while(k >= 0 && j < n && s[k] == s[j])
            {
                count += 2;
                
                if(ans < count)
                {
                    ans = count;
                    x = k;
                    y = j;
                }
                
                k--;
                j++;
            }
        }
        
        return s.substr(x, y-x+1);
        
    }
};
