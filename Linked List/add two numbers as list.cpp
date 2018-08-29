/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode *p=A,*q=B;
    int sum=0,carry=0;
    if(!A && !B)
       return NULL;
    if(!A)
        return B;
    if(!B)
        return A;
    while(p->next && q->next)
    {
        sum=p->val+q->val+carry;
        p->val=sum%10;
        carry=sum/10;
        p=p->next;
        q=q->next;
    }
    sum=p->val+q->val+carry;;
    p->val=sum%10;
    carry=sum/10;
    if(!(p->next))
    {
        p->next=q->next;
    }
    while(p->next)
    {
        p=p->next;
        sum=(p->val+carry);
        carry=sum / 10;
        p->val=sum%10;
        
    }
    if(carry)
    {
        ListNode *r=new ListNode(carry);
        p->next=r;
        r->next=NULL;
    }
    return A;
}
