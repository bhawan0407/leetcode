class Solution {
public:
    string removeVowels(string S) {
        
        string res = "";
        
        unordered_set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        
        for(auto c: S)
        {
            if(st.find(c) == st.end())
            {
                res += c;
            }
        }
        
        return res;
    }
};