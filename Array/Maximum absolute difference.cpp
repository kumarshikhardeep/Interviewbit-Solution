/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int maxArr(int* A, int n1) {
    int min1=A[0];
    int max1=A[0];
    int min2=A[0];
    int max2=A[0];
    int i;
    for(i=0;i<n1;i++)
    {
        int t1=A[i]-i;
        int t2=A[i]+i;
        if(t1<min1)
            min1=t1;
        if(t1>max1)
            max1=t1;
        if(t2<min2)
            min2=t2;
        if(t2>max2)
            max2=t2;
        
    }
    int r1=max1-min1;
    int r2=max2-min2;
    if(r1>r2)
        return r1;
    else
        return r2;
}
