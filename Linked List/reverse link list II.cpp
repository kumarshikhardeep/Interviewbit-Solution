/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    ListNode *cur=A;
    ListNode *prev=NULL;
    C=C-B;
    B--;
    while(B--)
    {
        prev=cur;
        cur=cur->next;
    }
    ListNode *loc1=prev;
    ListNode *loc2=cur;
    ListNode *nxt=cur->next;
    while(C--)
    {
        cur->next=prev;
        prev=cur;
        cur=nxt;
        nxt=nxt->next;
    }
    cur->next=prev;
    if(loc1==NULL)
    {
        loc2->next=nxt;
        return cur;
    }
    loc2->next=nxt;
    loc1->next=cur;
    return A;
}
