/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void numbers(TreeNode *A, vector<int>&v, vector<vector<int>> &res)
 {
     v.push_back(A->val);
     if(A->left==NULL && A->right==NULL)
     {
         res.push_back(v);
     }
     
     if(A->left)
        numbers(A->left,v,res);
     if(A->right)
        numbers(A->right,v,res);
     v.pop_back();
     
 }
int Solution::sumNumbers(TreeNode* A) {
    vector<int> v;
    vector<vector<int>> res;
    numbers(A,v,res);
    int p=0;
    for(auto i=0;i<res.size();i++)
    {
        int t=0;
        for(int j=0;j<res[i].size();j++)
        {
            //cout<<res[i][j]<<" ";
            t=(t*10+res[i][j])%1003;
        }
       // cout<<"\n";
        p=(p+t)%1003;
    }
    return p;
}
