class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maxc = -1;
        
        for(int& can: candies)
        {
            if(can > maxc)
            {
                maxc = can;
            }
        }
        
        vector<bool> ans;
        
        for(int& can: candies)
        {
            ans.push_back(((can + extraCandies) >= maxc));
        }
        
        return ans;
        
    }
};
