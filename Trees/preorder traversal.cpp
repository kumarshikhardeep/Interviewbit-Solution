/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void pretorder(vector<int>&res,TreeNode *A)
 {
    if(!A)
        return;
    res.push_back(A->val);
    pretorder(res,A->left);
    pretorder(res,A->right);
 }
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> res;
    pretorder(res,A);
    return res;
}
