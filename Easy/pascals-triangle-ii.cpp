class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> ans(rowIndex+1, 1);
        
        int r = 0;
        int tmp = 1;
        
        int i = 1;
        int j = rowIndex-1;
        
        while(i <= j)
        {
            tmp =  ((long)tmp * (long)(rowIndex-r)) / (r+1); 
            ans[i] = tmp;
            ans[j] = tmp;
            i++;
            j--;
            r++;
        }
        
        
        return ans;
    }
};
