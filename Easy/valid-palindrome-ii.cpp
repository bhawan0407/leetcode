class Solution {
public:
    
    bool isPal(string& s, int p, int q)
    {
        while(p < q)
        {
            if(s[p] != s[q])
            {
                return false;
            }
            
            p++;
            q--;
        }
        
        return true;
    }
    
    
    bool validPalindrome(string s) {
        
        int i = 0;
        int j = s.length() - 1;
        
        
        while(i < j)
        {
            if(s[i] != s[j])
            {
                break;
            }
            
            i++;
            j--;
        }
        
        if(i == j) return true;
        
        return (isPal(s, i+1, j) || isPal(s, i, j-1));
        
    }
};
