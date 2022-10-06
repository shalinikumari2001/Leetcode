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
    TreeNode* inorderToBST(vector<int>&v,int s,int e)
    {
        if(s>e)
            return NULL;
        int mid=s+(e-s)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=inorderToBST(v,s,mid-1);
        root->right=inorderToBST(v,mid+1,e);
        return root;
        
    }
    
    
    
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
     sort(nums.begin(),nums.end());
        TreeNode* root=inorderToBST(nums,0,nums.size()-1);
        return root;
        
        
        
    }
};