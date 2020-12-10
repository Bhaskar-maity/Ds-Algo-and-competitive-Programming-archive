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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(nums, 0, nums.size()-1);
        
    }
    
    //helper function
    TreeNode* helper(vector<int>& nums, int s, int e){
        if(s>e) return NULL;
        if(s==e) return new TreeNode(nums[s]);
        
        int idx = findMaxIndex(nums, s, e);
        TreeNode* root = new TreeNode(nums[idx]);
        root->left = helper(nums,s, idx-1);
        root->right = helper(nums,idx+1, e);
        
        return root;
    }
    
    //maximum find from vector
    int findMaxIndex(vector<int> v, int s, int e){
        int max=v[s];
        int idx;
        for(int i=s+1;i<=e;i++){
            if(max < v[i]){
                max=v[i];
                idx=i;
            }
        }
        return idx;
    }
};