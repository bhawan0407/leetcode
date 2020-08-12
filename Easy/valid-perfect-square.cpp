class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long i = 1;
        long long j = num;
        long long m;
        
        while(i <= j)
        {
            m = (j - i)/2 + i;
            
            long long tmp = m*m;
            
            if(tmp == num)
            {
                return true;
            }
            
            if(tmp > num)
            {
                j = m-1;
            }
            else
            {
                i = m+1;
            }
        }
        
        return false;
    }
};
