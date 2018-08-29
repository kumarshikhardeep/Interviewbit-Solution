/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    if(A->next==NULL)
        return A;

    ListNode * t=A;
    ListNode * x=A;
    int n=0;
    while(x)
    {
        n++;
        x=x->next;
    }
    int j=0;
    while(1)
    {
        ListNode * a=t;
        ListNode * b=a;
        t=t->next;
        for(int i=0;i<n-1;i++)
        {
            b=b->next;
        }
        a->next=b;
        b->next=t;
        
        n=n-2;
        if(n==0 || n==1 || n==2 )
            break;
    }
    if(n==1 || n==0)
    t->next=NULL;
    if(n==2)
    t->next->next=NULL;
    return A;
}