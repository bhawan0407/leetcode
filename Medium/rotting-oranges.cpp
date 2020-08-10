    int X[] = {-1, 1, 0, 0};
    int Y[] = {0, 0, -1, 1};

class Solution {
public:

    
    
    int orangesRotting(vector<vector<int>>& grid) {
        
        int ans = 0;
        int fresho = 0;
        
        queue<pair <pair<int, int>, int>>q;
        
        
        int n = grid.size();
        int m = grid[0].size();
        
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(grid[i][j] == 2)
                {
                    grid[i][j] = 0;
                    q.push(make_pair(make_pair(i, j), 0));
                }
                else if(grid[i][j] == 1)
                {
                    fresho++;
                }
            }
        }
        
        while(!q.empty())
        {
            pair <pair<int, int>, int> curr = q.front();
            q.pop();
            
            int currX = curr.first.first;
            int currY = curr.first.second;
            int level = curr.second;
            
            for(int i = 0; i < 4; i++)
            {
                int newX = currX + X[i];
                int newY = currY + Y[i];
                
                if(newX >= 0 && newX < n && newY >= 0 && newY < m &&
                  grid[newX][newY] == 1)
                {
                    grid[newX][newY] = 0;
                    q.push(make_pair(make_pair(newX, newY), level+1));
                    fresho--;
                    ans = level+1;
                }
            }   
        }
        
        if(fresho >= 1)
        {
            return -1;
        }
        
        return ans;
        
    }
};
