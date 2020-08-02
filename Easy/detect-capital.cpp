class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n = word.length();
        
        int count = 0;
        char idx = -1;
        char ch;
        
        for(int i = 0; i < word.length(); i++)
        {
            ch = word[i];
            
            if(ch >= 'A' && ch <= 'Z')
            {
                count++;
                idx = i;
            }
        }

        if(count == 0 || count == n)
        {
            return true;
        }
        
        if(count == 1 && idx == 0)
        {
            return true;
        }
        
        return false;
        
        
    }
};
