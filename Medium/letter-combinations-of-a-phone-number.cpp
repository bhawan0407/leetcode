class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        
        if(digits.length() == 0)
        {
            return ans;
        }
        
        queue<string> q, n;
        q.push("");
        
        string tmp;
        
        unordered_map<char, string> mp;
        
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        
        for(char& ch: digits)
        {
            while(!q.empty())
            {
                tmp = q.front();
                
                for(char& ch1: mp[ch])
                {
                    n.push(tmp + ch1);
                }
                
                q.pop();
            }
            
            q = n;
            
            queue<string> empty;
            n.swap(empty);
        }
        
        while(!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }
        
        return ans;
    }
};
