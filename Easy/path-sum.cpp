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
    
    bool func(TreeNode* node, int currSum, int sum)
    {
        if(node == NULL)
        {
            return false;
        }
        
        if(node->left == NULL && node->right == NULL)
        {
            if((currSum + node->val) == sum)
            {
                return true;
            }
            
            return false;
        }
        
        
        return func(node->left, currSum + node->val , sum) || 
            func(node->right, currSum + node->val, sum);
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        int currSum = 0;
        
        
        return func(root, currSum, sum);
    }
};
