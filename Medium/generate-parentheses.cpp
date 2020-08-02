class Solution {
public:
    
    void func(string& s, int open, int closed, int n, vector<string>& ans)
    {
        if(s.length() == 2*n)
        {
            ans.push_back(s);
            return;
        }
        
        if(open < n)
        {
            s += '(';
            func(s, open+1, closed, n, ans);
            s.pop_back();
        }
        
        if(closed < open)
        {
            s += ')';
            func(s, open, closed+1, n, ans);
            s.pop_back();
        }
            
        return;
    }
    
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> ans;
        
        string s = "";
        
        func(s, 0, 0, n, ans);
        
        return ans;
    }
};
