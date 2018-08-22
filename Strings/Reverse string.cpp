void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    

    int l=A.length();
    if(l==0)
        return;
   // printf("%d",l);
    int i=0;
    int j=l-1;
    while(A[i]==' ' || A[j]==' ')
    {
        if(A[i]==' ')
        i++;
        if(A[j]==' ')
        j--;
    }
    vector<string>v;
    string temp="";
    for(int k=i;k<=j;k++)
    {
        if(A[k]==' ')
        {
            v.push_back(temp);
            //cout<<temp<<"  ";
            temp="";
        }
        else
        {
            temp+=A[k];
        }
    }
    v.push_back(temp);
    A="";
    for(auto k=v.size()-1;k>0;k--)
    {
       // cout<<A[k]<<" ";
        A+=v[k];
        A+=" ";
    }
    A+=v[0];
    /*
    string B="";
    for(int p=i;p<=j;p++)
        B+=A[p];
    
    int last=B.length()-1;
    A="";
    for(int k=B.length()-1;k>=0;k--)
    {
        if(B[k]==' ')
        {
            for(int p=k+1;p<=last;p++)
              A+=B[p];
            A+=" ";
            last=k-1;
        }
        
        if(k==0)
        {
            for(int p=k+i;p<=last;p++)
              A+=B[p];
            
        }
    }  */
}
