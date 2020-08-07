class Solution {
public:
    bool isValid(string s) {
    
        unordered_map<char, char> mp;
        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';
        
        unordered_set<char> st{'{', '[', '('};
        
        stack<char> stk;
        
        for(char& ch: s)
        {
            if(st.find(ch) != st.end())
            {
                stk.push(ch);
            }
            else 
            {
                if(!stk.empty() && stk.top() == mp[ch])
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        
        return stk.empty();
    }
};
