void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int j=0;
    int k=A.size()-1;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
        {
            int t=A[i];
            A[i]=A[j];
            A[j]=t;
            j++;
        }
    }
    for(int i=A.size()-1;i>=j;i--)
    {
        if(A[i]==2)
        {
            int t=A[i];
            A[i]=A[k];
            A[k]=t;
            k--;
        }
    }
}
