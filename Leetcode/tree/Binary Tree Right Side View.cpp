//https://leetcode.com/problems/binary-tree-right-side-view/submissions/
// Input: root = [1,2,3,null,5,null,4]
// Output: [1,3,4]
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

//bfs approach level order traversal
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if (!root) {
            return {};
        }
        queue<TreeNode*> q;
        vector<int> v;
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();

            for(int i=0; i<n; i++){
                TreeNode* node = q.front();
                q.pop();
                //cause rightSideView
                if(i==n-1){
                    v.push_back(node->val);
                }

                if(node->left){
                
                    q.push(node->left);
                }
                if(node->right){
                    
                    q.push(node->right);
                }
            }

            
            
            
        }

        return v;
    }
};