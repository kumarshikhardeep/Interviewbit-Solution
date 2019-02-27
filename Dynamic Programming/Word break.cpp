bool search(string A, vector<string> B){
    for(int i = 0; i < B.size(); i++){
        if(B[i] == A){
            return true;
        }
    }
    
    return false;
}

int Solution::wordBreak(string A, vector<string> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n = A.size();
 
    vector<int> temp(n+1, 0);
    temp[n] = 1;
    
    for(int i = n-1; i >= 0; i--){
        for(int j = i; j < n; j++){
            string s = A.substr(i, j-i+1);
            if(search(s, B) && temp[j+1] == 1){
                temp[i] = 1;
                break;
            }
        }
    }
    
    return temp[0];

}

/*
int Solution::wordBreak(string A, vector<string> &B) {
    int l=A.length();
    int arr[l][l];
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            arr[i][j]=0;
        }
    }
    unordered_map<string,int> m;
    for(int i=0;i<B.size();i++)
    {
        m.insert(make_pair(B[i],1));
    }
    for(int i=0;i<l;i++)
    {
        if(m.find(to_string(A[i]))!=m.end())
        {
            arr[i][i]=1;
        }
        else
            arr[i][i]=0;
    }
    for(int k=2;k<=l;k++)
    {
        for(int i=0;i<l-k+1;i++)
        {
            int j=i+k-1;
            string t=A.substr(i,k);
            if(m.find(t)!=m.end())
            {
                arr[i][j]=1;
            }
            else
            {
                for(int q=i;q<j;q++)
                {
                    if(arr[i][q]==1 && arr[q+1][j]==1)
                    {
                        arr[i][j]=1;
                        break;
                    }
                }
            }
        }
    }
    // for(int i=0;i<l;i++)
    // {
    //     for(int j=0;j<l;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    return arr[0][l-1];
}*/
