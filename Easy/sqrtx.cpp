class Solution {
public:
    int mySqrt(int x) {
        
        long long i = 0;
        long long j = (long long)x + 1;
        long long mid;
        
        while(i < j)
        {
            mid = (j-i)/2 + i;
            
            if(mid*mid > x)
            {
                j = mid;
            }
            else
            {
                i = mid+1;
            }
        }
        
        return (int)i-1;
    }
};
