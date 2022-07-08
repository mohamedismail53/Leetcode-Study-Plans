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
    pair<int, bool> calcHeight(TreeNode* root) {
        if(!root)
            return {0, 1};
        auto left = calcHeight(root->left);
        auto right = calcHeight(root->right);
        bool balanced = abs(left.first-right.first)<=1&&left.second&&right.second;
        return {1+max(left.first, right.first), balanced};
    }
    bool isBalanced(TreeNode* root) {
        return calcHeight(root).second;
    }
};