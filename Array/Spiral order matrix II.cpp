vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> arr(A,vector<int>(A,0));;
    int top=0,bottom=A-1,left=0,right=A-1;
    int val=1;
    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            arr[top][i]=val;
            val++;
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            arr[i][right]=val;
            val++;
        }
        right--;
        for(int i=right;i>=left;i--)
        {
            arr[bottom][i]=val;
            val++;
        }
        bottom--;
        for(int i=bottom;i>=top;i--)
        {
            arr[i][left]=val;
            val++;
        }
        left++;
    }
    return arr;
}
