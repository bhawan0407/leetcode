class Solution {
public:
    int numJewelsInStones(string J, string S) {
       
        unordered_set<char> st;
        
        for(auto ch: J)
        {
            st.insert(ch);
        }
        
        int ans = 0;
        
        for(auto ch: S)
        {
            if(st.find(ch) != st.end())
            {
                ans++;
            }
        }
        
        return ans;
        
    }
};