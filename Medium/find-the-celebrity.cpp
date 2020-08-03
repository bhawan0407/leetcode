/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        
        int ce = 0;
        
        for(int i = 1; i < n; i++)
        {
            if(knows(ce, i))
            {
                ce = i;
            }
        }
        
        // check if the chosen celebrity is indeed a celebrity.
        
        for(int i = 0; i < n; i++)
        {
            if(i != ce)
            {
                if(knows(ce, i) || !knows(i, ce))
                {
                    return -1;
                }
            }
        }
        
        return ce;
            
    }
};
