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
    vector<int> postorderTraversal(TreeNode* root) {
        
        stack <TreeNode*> st;
        stack <TreeNode*> st1;
        vector<int> ans;
        if(root == NULL) return ans;
        st.push(root);


        while(!st.empty()){
            root = st.top();
            st.pop();

            st1.push(root);
            if(root->left != NULL){
                st.push(root->left);
               
            }
            if(root->right != NULL){
                st.push(root->right);
               
            }
        }

        while(!st1.empty()){
            ans.push_back(st1.top()->val);
            st1.pop();
        }
        return ans;
       
    }
};