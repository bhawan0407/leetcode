class Solution {
public:
    bool isPowerOfTwo(int n) {
        //return (n > 0) && (4294967296 % n == 0);
        
        return (n > 0) && ((n & (n-1)) == 0);
    }
};
