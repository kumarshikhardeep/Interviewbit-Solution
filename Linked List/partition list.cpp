/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode *p=new ListNode(0);
    ListNode *ret=p;
    ListNode *q=A,*r=A;
    while(q)
    {
        if(q->val<B)
        {
            ListNode *temp=new ListNode(q->val);
            p->next=temp;
            p=p->next;
        }
        q=q->next;
    }
    while(r)
    {
        if(r->val>=B)
        {
            ListNode *temp=new ListNode(r->val);
            p->next=temp;
            p=p->next;
        }
        r=r->next;
    }
    p->next=NULL;
    return ret->next;;
}
