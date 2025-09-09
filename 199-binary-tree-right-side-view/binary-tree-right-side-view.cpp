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

    void find(TreeNode* Node,int level,vector<int>&ans){
        if(Node == NULL) return;
        if(level == ans.size()) ans.push_back(Node->val);
        find(Node->right,level+1,ans);
        find(Node->left,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> answer;
        find(root,0,answer);
        return answer;
    }
};