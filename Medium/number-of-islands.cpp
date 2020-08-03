class Solution {
public:
    
    int X[4] = {-1, 1, 0, 0};
    int Y[4] = {0, 0, -1, 1};
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        
        if(n == 0)
        {
            return 0;
        }
        
        int count = 0;
        
        int m = grid[0].size();
        
        queue<pair<int, int>> q;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j] == '1')
                {
                    count++;
                    
                    grid[i][j] = 'X';
                    q.push(make_pair(i, j));
                    
                    while(!q.empty())
                    {
                        pair<int, int> curr = q.front();
                        q.pop();
                        
                        for(int p = 0; p < 4; p++)
                        {
                            int newX = curr.first + X[p];
                            int newY = curr.second + Y[p];
                            
                            if(newX >= 0 && newX < n && 
                               newY >= 0 && newY < m && 
                               grid[newX][newY] == '1' )
                            {
                            
                                grid[newX][newY] = 'X';
                                q.push(make_pair(newX, newY));
                            }
                        }
                    }
                }
            }
        }
        
        return count;
    }
};
