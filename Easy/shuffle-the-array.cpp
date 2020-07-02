class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> res(2*n, 0);
        
        int i = 0;
        int j = n;
        
        int k = 0;
        
        while(i < n)
        {
            res[k++] = nums[i];
            res[k++] = nums[j];
            i++;
            j++;
        }
        
        return res;
    }
};