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
int FindMAximum(TreeNode* root, int &x)
{
    if (root == NULL)
        return 0;
 
    int Left = FindMAximum(root->left,x);
    int Right = FindMAximum(root->right,x);
 
  
    int max_single = max(max(Left, Right) + root->val, root->val);
    int max_top = max(max_single, Left + Right + root->val);
 
    x = max(x, max_top); 
 
    return max_single;
}
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        
       int res = INT_MIN;
 
    
        FindMAximum(root, res);
        return res;
    }
};
