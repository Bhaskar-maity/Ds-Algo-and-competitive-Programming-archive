
// https://leetcode.com/problems/binary-tree-level-order-traversal/
// Input: root = [3,9,20,null,null,15,7]
// Output: [[3],[9,20],[15,7]]

//bfs level order traversal
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        vector<int> temp;

        if(!root) return {};
        q.push(root);
        

        while(!q.empty()){
            int n=q.size();
            for(int i=0; i <n; i++){
                TreeNode * node = q.front();
                temp.push_back(node->val);
                q.pop();

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }

            ans.push_back(temp);
            temp.clear();
        }

        return ans;
    }
};