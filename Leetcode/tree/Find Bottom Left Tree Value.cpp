//https://leetcode.com/problems/find-bottom-left-tree-value/
// Input: root = [2,1,3]
// Output: 1
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

//bfs approach, where leftmost root stored after levelwise traversal
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;

        q.push(root);
        while(!q.empty()){
            root = q.front();
            q.pop();

            if(root->right){
                q.push(root->right);
            }
            if(root->left){
                q.push(root->left);
            }
        }
        return root->val;
    }   
};