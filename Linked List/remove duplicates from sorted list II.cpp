/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *toreturn = new ListNode(0);
    ListNode *f = toreturn;;
    while(A!=NULL)
    {
        int vaL = A->val;
        ListNode *loc = A;
        int count = 0;
        while(A!=NULL && A->val == vaL)
        {
            count++;
            A = A->next;
        }
        if(count == 1)
        {
            toreturn->next = loc;
            toreturn = toreturn->next;
            
        }
    }
    if(toreturn != NULL)
    toreturn->next = NULL;
    
    return f->next;
}
