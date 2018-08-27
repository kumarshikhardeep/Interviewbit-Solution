/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int search(vector<int>&B,int val,int start,int end)
 {
     for(auto i=start;i<=end;i++)
     {
         if(B[i]==val)
            return i;
     }
 }
 TreeNode *tree(vector<int>&A,vector<int>&B,int start,int end,int &p)
 {
     if(start>end)
        return NULL;
     TreeNode *t=new TreeNode(A[p++]);
     if(start==end)
        return t;
     int i=search(B,t->val,start,end);
     t->left=tree(A,B,start,i-1,p);
     t->right=tree(A,B,i+1,end,p);
     return t;
 }
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    if(A.empty() || B.empty())
        return NULL;
    int p=0;
    return tree(A,B,0,A.size()-1,p);
}
