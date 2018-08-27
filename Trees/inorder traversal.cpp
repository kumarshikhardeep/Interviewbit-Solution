/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void inorder(vector<int>&res,TreeNode *A)
 {
    if(!A)
        return;
    inorder(res,A->left);
    res.push_back(A->val);
    inorder(res,A->right);
 }
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> res;
    inorder(res,A);
    return res;
}
