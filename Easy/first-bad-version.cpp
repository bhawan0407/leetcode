// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int i = 1;
        int j = n;
        int mid;
        
        while(i < j)
        {
            mid = (j-i) / 2 + i;
            
            if(isBadVersion(mid))
            {
                j = mid;
            }
            else
            {
                i = mid + 1;
            }
        }
        
        return i;
    }
};
