/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

bool cmp(const pair<int, int>& a, const pair<int, int>& b)
{
    if(a.first == b.first)
    {
        return a.second < b.second;
    }
    
    return a.first < b.first;
}

class Solution {
public:
    
    void func(TreeNode* node, map<int, vector<pair<int, int>>>& mp, int x, int y)
    {
        if(node == NULL)
        {
            return;
        }
        
        if(mp.find(x) == mp.end())
        {
            mp[x].push_back(make_pair(y, node->val));
        }
        else
        {
            mp[x].push_back(make_pair(y, node->val));
        }
        
        func(node->left, mp, x-1, y+1);
        func(node->right, mp, x+1, y+1);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int, vector<pair<int, int>>> mp;
        
        func(root, mp, 0, 0);
        
        vector<vector<int>> ans;
        
        for(auto it: mp)
        {
            sort(it.second.begin(), it.second.end(), cmp);
            vector<int> tmp;
            for(auto p: it.second)
            {
                tmp.push_back(p.second);
            }
            
            ans.push_back(tmp);
        }
    
        return ans;
        
    }
};
