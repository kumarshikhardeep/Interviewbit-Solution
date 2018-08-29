/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *n=new ListNode(0);
    ListNode *ret;
    ret=n;
    while(A && B)
    {
        if(A->val>=B->val)
        {
            n->next=B;
            B=B->next;
        }
        else
        {
            n->next=A;
            A=A->next;
        }
        n=n->next;
    }
    if(A)
        n->next=A;
    if(B)
        n->next=B;
    return ret->next;
}
