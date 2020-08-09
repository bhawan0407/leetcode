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
    
    void func(TreeNode* node, double& minVal, int& minNode, double target)
    {
        if(node == NULL)
        {
            return;
        }
        
        if(abs(node->val - target) < minVal)
        {
            minVal = abs(node->val - target);
            minNode = node->val;
        }
        
        if(node->val > target)
        {
            func(node->left, minVal, minNode, target);
        }
        else
        {
            func(node->right, minVal, minNode, target);
        }
        
        
        return;
        
    }
    
    int closestValue(TreeNode* root, double target) {
       
        int minNode = 0;
        double minVal = DBL_MAX;
        
        func(root, minVal, minNode, target);
        
        return minNode;
        
    }
};
