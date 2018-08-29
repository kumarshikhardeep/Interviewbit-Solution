/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode *cur=A;
    ListNode *prev=NULL, *next=NULL;
    int count=0;
    while(cur!=NULL && count<B)
    {
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
        count++;
    }
    if(next!=NULL)
        A->next=reverseList(next,B);
    return prev;
}
