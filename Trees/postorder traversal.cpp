/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void postorder(vector<int>&res,TreeNode *A)
 {
    if(!A)
        return;
    postorder(res,A->left);
    postorder(res,A->right);
    res.push_back(A->val);
 }
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> res;
    postorder(res,A);
    return res;
}
