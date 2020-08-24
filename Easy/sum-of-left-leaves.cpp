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
    
    void f(TreeNode* node, int flag, int& ans)
    {
        if(node == NULL)
        {
            return;
        }
        
        if(node->left == NULL && node->right == NULL && !flag)
        {
            ans += node->val;
        }
        
        f(node->left, 0, ans);
        f(node->right, 1, ans);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        
        int ans = 0;
        
        f(root, 1, ans);
        
        return ans;
    }
};
