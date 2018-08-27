/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {
    queue<TreeLinkNode*>q;
    q.push(A);
    q.push(NULL);
    while(!q.empty())
    {
        TreeLinkNode *t=q.front();
        q.pop();
        if(t)
        {
            t->next=q.front();
            if(t->left)
                q.push(t->left);
            if(t->right)
                q.push(t->right);
        }
        else if(!q.empty())
            q.push(NULL);
    }
    return;
}
