int Solution::numTrees(int A) {
    int arr[A+1];
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    for(int i=3;i<=A;i++)
    {
        int temp=0;
        int j;
        for(j=0;j<i/2;j++)
        {
            temp=temp + (2*arr[j]*arr[i-j-1]);
        }
        if(i%2!=0)
            temp+=arr[j]*arr[i-j-1];
        arr[i]=temp;
    }
    return arr[A];
}
