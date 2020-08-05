class WordDictionary {
public:
    /** Initialize your data structure here. */
    unordered_map<int, vector<string>> mp;
    WordDictionary() {
        
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        int n = word.length();
        
        if(mp.find(n) == mp.end())
        {
            mp[n] = vector<string>{word};
        }
        else
        {
            mp[n].push_back(word);
        }
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        
        for(string& w: mp[word.length()])
        {
            int i = 0;
            for(i = 0; i < word.length(); i++)
            {
                if(word[i] != '.' && word[i] != w[i])
                {
                    break;
                }
            }
            
            if(i == word.length())
            {
                return true;
            }
        }
        
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
