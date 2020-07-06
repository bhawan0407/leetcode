class Solution {
public:
    bool buddyStrings(string A, string B) {
        
        char x1, x2, y1, y2;
        
        int count = 0;
        
        if(A.length() != B.length())
        {
            return false;
        }
        
        if(A.length() < 2)
        {
            return false;
        }
        
        
        if(A == B)
        {
            unordered_set<char> st;
            
            for(auto ch: A)
            {
                if(st.find(ch) != st.end())
                {
                    return true;
                }
                
                st.insert(ch);
            }
            
            return false;
        }
        
        
        for(int i = 0; i < A.length(); i++)
        {
            if(A[i] != B[i])
            {
                if(count == 0)
                {
                    x1 = A[i];
                    y1 = B[i];
                }
                else if(count == 1)
                {
                    x2 = A[i];
                    y2 = B[i];
                }
                else
                {
                    return false;
                }
                
                count++;
            }
        }
        
        return (x1 == y2) && (x2 == y1);
            
    }
};