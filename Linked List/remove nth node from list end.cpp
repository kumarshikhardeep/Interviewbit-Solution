/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *p=A;
    ListNode *q=A;
    ListNode *r=A;
    if(A==NULL || B==0)
    return A;
    if(A->next==NULL && B==1)
    {
        A=NULL;
        return A;
    }
    int count=0;
    while(r)
    {
        count++;
        r=r->next;
    }
    if(B>=count)
        return A->next;
    while(B--)
    {
        q=q->next;
    }
    while(q->next)
    {
        q=q->next;
        p=p->next;
    }
    p->next=p->next->next;
    return A;
}
