/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int maxSubArray(const int* A, int n1) {
    
    int a=0,b=0,i,flag=0,max=A[0];
    for(i=0;i<n1;i++)
    {
        if(A[i]>=0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        for(i=1;i<n1;i++)
    {
        if(max<A[i])
            max=A[i];
    }
    return max;
    }
    for( i=0;i<n1;i++)
    {
        b=b+A[i];
        if(b<0)
        {
            b=0;
        }
        if(a<b)
        {
            a=b;
        }
    }
    return a;
}
