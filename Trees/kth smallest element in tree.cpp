/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void inorder(TreeNode *A,vector<int> &t)
 {
     if(!A)
        return;
     inorder(A->left,t);
     t.push_back(A->val);
     inorder(A->right,t);
 }
int Solution::kthsmallest(TreeNode* A, int B) {
    vector<int> t;
    inorder(A,t);
    return t[B-1];
    
}
