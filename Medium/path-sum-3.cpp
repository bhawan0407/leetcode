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
class Solution {
public:
    
    unordered_map<int, int> mp;
    
    void func(TreeNode* node, int& currSum, int sum, int& ans)
    {
        if(node == NULL)
        {
            return;
        }
        
        currSum += node->val;
        
        
        if(mp.find(currSum - sum) != mp.end())
        {
            ans += mp[currSum - sum];
        }
        
        mp[currSum]++;
            
        
        func(node->left, currSum, sum, ans);
        func(node->right, currSum, sum, ans);
        
        mp[currSum]--;
        
        currSum -= node->val;
        
        return; 
    }
    
    int pathSum(TreeNode* root, int sum) {
        
        int currSum = 0;
        int ans = 0;
        
        mp[0] = 1;
        
        func(root, currSum, sum, ans);
        
        return ans;
    }
};
