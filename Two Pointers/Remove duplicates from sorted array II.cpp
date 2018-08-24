int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()<=2)
        return A.size();
    int count = 2;
    int e=0;
    for(int i=2;i<A.size();i++)
    {
        if(A[i] != A[i-2-e]) 
        {
            A[count] = A[i];
            count++;

        }

        
        else
        {
            e++;
        }
    }
    return count;
}
