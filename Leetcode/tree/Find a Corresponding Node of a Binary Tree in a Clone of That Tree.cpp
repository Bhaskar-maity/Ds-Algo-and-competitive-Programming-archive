//link -https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* orig, TreeNode* clnd, TreeNode* trgt) {
        if(orig == NULL) return NULL;
        else if(orig == trgt) return clnd;
        TreeNode* left = getTargetCopy(orig->left, clnd->left, trgt);
        TreeNode* right = getTargetCopy(orig->right, clnd->right, trgt);
        //if left!= null return left
        return left? left:right;
    }
};