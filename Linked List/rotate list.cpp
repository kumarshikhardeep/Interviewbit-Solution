/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 

 
ListNode* Solution::rotateRight(ListNode* A, int B) {
   
    
    
    ListNode *n1=A;
    ListNode *n2=A;
    int count=0;
    if(A==NULL || A->next==NULL)
        return A; 
    while(n1->next)
    {
        count++;
        n1=n1->next;
    }
    
    if(B==count+1 || B%(count+1)==0)
        return A;
    count=count-(B%(count+1));
    
    while(count--)
    {
        n2=n2->next;
    }
    ListNode *n3=n2->next;
    n2->next=NULL;
    
    n1->next=A;
    return n3; 
    
}
