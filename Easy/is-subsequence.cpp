class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i = 0;
        int j = 0;
        
        for(j = 0; j < s.length(); j++)
        {
            while(i < t.length() && t[i] != s[j])
            {
                i++;
            }
            
            if(i == t.length())
            {
                return false;
            }
        
            i++;
            
        }
        
        
        return (j == s.length());
    }
};
