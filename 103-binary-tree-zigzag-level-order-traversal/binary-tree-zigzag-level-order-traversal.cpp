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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if(root == NULL) return ans;

        q.push(root);

        int k = 0;

        while(!q.empty()){
            int size = q.size();
            vector<int> ans1;


            
                for(int i=0;i<size;i++){
                    TreeNode* node = q.front();
                    ans1.push_back(node->val);
                    q.pop();
                    if(node->left) q.push(node->left);
                    if(node->right) q.push(node->right);
                }
            
            
            if(k == 1) reverse(ans1.begin(),ans1.end());
            k = !k;
            ans.push_back(ans1);
         


        }
        return ans;


        
    }
};