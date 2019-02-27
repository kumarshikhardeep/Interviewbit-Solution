int Solution::chordCnt(int A) {
    long long int arr[A+1];
    arr[0]=1;
    arr[1]=1;
    
    for(int i=2;i<=A;i++)
    {
        long long int sum=0;
        if(i%2==0)
        {
            for(int j=i-1;j>=i/2;j--)
            {
                sum=(sum+(arr[j]*2*arr[i-j-1])%1000000007)%1000000007;
            }
            arr[i]=sum;
        }
        else
        {
            int j;
            for( j=i-1;j>i/2;j--)
            {
                sum=(sum+(arr[j]*2*arr[i-j-1])%1000000007)%1000000007;
            }
            sum+=(arr[j]*arr[i-j-1])%1000000007;
            arr[i]=sum;
        }
    }
    return arr[A]%1000000007;
}
