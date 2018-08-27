/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    TreeNode * node=A;
    while(node)
    {
        if(node->left)
        {
            TreeNode * t=node->left;
            while(t->right)
                t=t->right;
            t->right=node->right;
            node->right=node->left;
            node->left=NULL;
        }
        node=node->right;
    }
    return A;
}
