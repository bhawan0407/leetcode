class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        vector<int> in(N+1, 0);
        vector<int> out(N+1, 0);
        
        int judge = -1;
        
        for(auto p: trust)
        {
            in[p[0]]++;
            out[p[1]]++;
        }
        
        
        for(int i = 1; i <= N; i++)
        {
            if(out[i] == N-1 && in[i] == 0)
            {
                judge = i;
            }
        }
        
        return judge;
    }
};
