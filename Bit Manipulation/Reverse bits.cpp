unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int arr[32]={0};
    unsigned int i=0,res=0;
    while(A!=0)
    {
        arr[i++]=A%2;
        A=A/2;
    }
    int k=0;
    for(int i=31;i>=0;i--)
    {
       // printf("%d",arr[i]);
        res=res+arr[i]*pow(2,k);
        k++;
    }
    return res;
}
