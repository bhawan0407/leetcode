class Solution {
public:
    
    bool func(vector<int>& weights, int D, int val)
    {
        int days = 0;
        int total = 0;
        
        for(int& weight: weights)
        {
           if(total + weight > val)
           {
               total = weight;
               days++;
               
               if(days > D)
               {
                   return false;
               }
           }
            else
            {
                total += weight;
            }
        }
        
        days++;
        
        return (days <= D);
    }
    
    
    int shipWithinDays(vector<int>& weights, int D) {
        
        int right = 0;
        int left = 0;
        
        for(int& weight: weights)
        {
            left = max(left, weight);
            right += weight;
        }
        
        int mid;
        
        
        while(left < right)
        {
            mid = (right - left)/2 + left;
            
            if(func(weights, D, mid))
            {
                right = mid;
            }
            else
            {
                left = mid+1;
            }
        }
        
        return left;
        
    }
};
