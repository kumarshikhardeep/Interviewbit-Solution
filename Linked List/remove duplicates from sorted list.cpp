/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A==NULL)
        return A;
    ListNode *cur;
    ListNode *temp;
    cur=A;
    while(cur->next!=NULL)
    {
        temp=cur->next;
        while(temp->val==cur->val)
        {
            if(temp->next==NULL)
            {
                cur->next=NULL;
                return A;
            }
            temp=temp->next;
        }
        cur->next=temp;
        cur=cur->next;
    }
    return A;
}
