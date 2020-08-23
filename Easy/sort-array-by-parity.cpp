class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        int i = 0;
        int j = A.size() - 1;
        
        
        while(i < j)
        {
            if(A[i] % 2 == 0)
            {
                i++;
                continue;
            }
            
            if(A[j] % 2 == 1)
            {
                j--;
                continue;
            }
            
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            
            i++;
            j--;
        }
        
        return A;
    }
};
