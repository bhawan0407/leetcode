class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int i = 0;
        int j = nums.size(); // - 1;
        int mid;
        
        while(i < j)
        {
            mid = (j - i) / 2 + i;
            
            if(nums[mid] < target)
            {
                i = mid+1;
            }
            else
            {
                j = mid;
            }
        }
        
        
        return i;
        
    }
};
