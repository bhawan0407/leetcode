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
    
    vector<int>pathV;
    vector<vector<int>> ans;
    
    void func(TreeNode* node, int sum)
    {
        if(node == NULL)
        {
            return;
        }
        
        pathV.push_back(node->val);
        
        if(node->left == NULL && node->right == NULL)
        {
            if(accumulate(pathV.begin(), pathV.end(), 0) == sum)
            {
                ans.push_back(pathV);
            }
        }
        
        
        func(node->left, sum);
        func(node->right, sum);
        
        
        pathV.pop_back();
        
        return;
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
    
        func(root, sum);
        
        return ans;
        
    }
};
