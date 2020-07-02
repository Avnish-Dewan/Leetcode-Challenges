

//     3
//    / \
//   9  20
//     /  \
//    15   7
// return its bottom-up level order traversal as:
// [
//   [15,7],
//   [9,20],
//   [3]
// ]



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
        vector<vector<int>> levelOrderBottom(TreeNode* root) {
            vector<vector<int> > v1;        
            
            if(!root){
                return v1;
            }
            
            stack<vector<int> > st;
        
            queue<TreeNode*> q;

            vector<int> v;

            q.push(root);
            int s = q.size();

            while(!q.empty()){

                TreeNode* node = q.front();
                q.pop();

                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }

                v.push_back(node->val);
                s--;
                if(s == 0){
                    st.push(v);
                    v.clear();
                    s = q.size();
                }
            }

            while(!st.empty()){
                v1.push_back(st.top());
                st.pop();
                
            }

            return v1;
        }
};
