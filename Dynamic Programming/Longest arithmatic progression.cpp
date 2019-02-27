int Solution::solve(const vector<int> &A) {
   //vector<vector<int>> mat;
 /*  int mat[A.size()][A.size()];
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A.size();j++)
        {
            if(i>=j)
                mat[i][j]=0;
            else
            {
                mat[i][j]=A[j]-A[i];
            }
        }
    }
    //vector<vector<int>> res;
    int res[A.size()][A.size()];
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A.size();j++)
        {
            if(i>=j)
                res[i][j]=0;
            else
                res[i][j]=1;
            if(i<j){
            for(int k=0;k<i;k++)
            {
                if(mat[k][i]==mat[i][j])
                {
                    res[i][j]++;
                    break;
                }
            }
            }
        }
    }
    int max=0;
    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A.size();j++)
        {
            if(res[i][j]>max)        
                max=res[i][j];
            
        }
    }
    return max;  */
    
    
    int n=A.size();
        if(n<=2)

        return n;

 

    int i,j,k,d;

    int mxl=2;

    int current;

    int last;

 

    //i will be the index of first element of the ap

    for(i=0;i<(n-mxl);i++)

    {

        //j will be the index of second element of the ap

        for(j=i+1;j<(n-mxl+1);j++)

        {

            //common difference

            d=A[j]-A[i];

            last=A[j];

            current=2;

 

            for(k=j+1;k<n;k++)

            {

                if(A[k]-last==d)

                {

                    //here is our element

                    current++;

                    last=A[k];

 

                }

            }

 

            mxl=max(mxl,current);

 

        }

 

    }

 

    return mxl;
    
}
