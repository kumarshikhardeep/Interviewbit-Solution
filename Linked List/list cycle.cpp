/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details


    ListNode *p=A;
    ListNode *q=A;
    int flag=0;
    while(p && q)
    {
        
        if(p->next)
            p=p->next;
        else return NULL;
        if(q->next)
            q=q->next->next;
        else return NULL;
        
        if(p==q)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        while(A!=p)
        {
            p=p->next;
            A=A->next;
        }
        return A;
    }
    return NULL;
}
