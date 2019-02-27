ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=0;i<A.size();i++)
    {
        while(A[i])
        {
            q.push(A[i]->val);
            A[i]=A[i]->next;
        }
    }
    ListNode *res=new ListNode(0);
    ListNode *ptr=res;
   
    while(q.empty()==false)
    {
        ListNode *n=new ListNode(q.top());
        res->next=n;
        res=res->next;
        q.pop();
    }
    res->next=NULL;
    return ptr->next;
}
