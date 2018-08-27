/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void dfsfind(TreeNode *A,int val,vector<int> &t,int &flag)
 {
     if(!A)
        return ;
    if(flag==1)
        return;
     t.push_back(A->val);
     if(t[t.size()-1]==val)
     {
        flag=1;
        return ;
     }
     dfsfind(A->left,val,t,flag);
     dfsfind(A->right,val,t,flag);
     t.pop_back();
     
 }
int Solution::lca(TreeNode* A, int B, int C) {
    vector<int> a;
    vector<int> b;
    int flag=0;
    dfsfind(A,B,a,flag);
    flag=0;
    dfsfind(A,C,b,flag);
    if(a.empty() || b.empty())
        return -1;
    int m=min(a.size(),b.size());
    int i;
    for(i=0;i<m;i++)
    {
        if(a[i]!=b[i])
            break;
    }
    return a[i-1];
    
    
}
