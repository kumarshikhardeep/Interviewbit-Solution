/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode * p=A;
    ListNode * q=A->next;
    if(!A || !A->next)
        return A;
    while(q)
    {
        int temp=p->val;
        p->val=q->val;
        q->val=temp;
        p=q->next;
        q=p?p->next:NULL;
        
    }
    return A;
}
