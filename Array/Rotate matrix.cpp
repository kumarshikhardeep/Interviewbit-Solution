void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=A.size();
    int top=0,left=0,bottom=n-1,right=n-1;
    while(top<bottom && left<right)
    {
        for(int i=left;i<right;i++)
        {
            int temp=A[top][i];
            A[top][i]=A[n-i-1][left];
            A[n-i-1][left]=A[bottom][n-i-1];
            A[bottom][n-i-1]=A[i][right];
            A[i][right]=temp;
        }
        top++;
        left++;
        bottom--;
        right--;
    }
    
}
