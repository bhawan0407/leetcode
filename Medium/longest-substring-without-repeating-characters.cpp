class Solution {
public:
    
    int max(int a, int b)
    {
        if(a > b)
        {
            return a;
        }
        
        return b;
    }
    
    int lengthOfLongestSubstring(string s) {
        
        int ws = 0;
        
        unordered_set<char> st;
        
        int n = s.length();
        
        int ans = 0;
        
        for(int we = 0; we < n; we++)
        {
            while(st.find(s[we]) != st.end())
            {
                st.erase(s[ws]);
                ws++;
            }
                
            st.insert(s[we]);
            
            ans = max(ans, st.size());
        }
        
        return ans;
    }
};
