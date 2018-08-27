/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    stack<TreeNode*> cur;
    stack<TreeNode*> next;
    vector<vector<int>> res;
    vector<int> t;
    if(A==NULL)
        return res;
    cur.push(A);
    bool lefttoright=true;
    while(!cur.empty())
    {
        TreeNode* temp=cur.top();
        cur.pop();
        if(temp)
        {
            t.push_back(temp->val);
            if(lefttoright)
            {
                if(temp->left)
                    next.push(temp->left);
                if(temp->right)
                    next.push(temp->right);
            }
            else
            {
                if(temp->right)
                    next.push(temp->right);
                if(temp->left)
                    next.push(temp->left);
            }
        }
        if(cur.empty())
        {
            res.push_back(t);
            t.clear();
            swap(cur,next);
            lefttoright=!lefttoright;
        }
    }
    return res;
}

