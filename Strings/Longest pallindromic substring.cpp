string Solution::longestPalindrome(string A) {
    
     string toreturn = "";
    int max_len = 0;
    for(int i=0;i<A.size();i++)
    {
        int r = i+1;
        int l = i-1;
        int count  = 0;
        while(l>=0 && r<A.size() && A[l] == A[r])
        {
            count++;
            l--;
            r++;
        }
        if(max_len < (2*count+1))
        {
            max_len = 2*count+1;
            toreturn = A.substr(l+1,max_len);
        }
    }
    //cout<<max_len<<" "<<toreturn<<endl;
    
    for(int i=1;i<A.size();i++)
    {
        int l = i-1;
        int r = i;
        int count = 0;
        while(l>=0 && r<A.size() && A[l] == A[r])
        {
            count++;
            l--;
            r++;
        }
        if(max_len < (2*count))
        {
            max_len = 2*count;
            toreturn = A.substr(l+1,max_len);
        }
    }
    
    return toreturn;
    
    /*
    int n=A.length();
    bool arr[n][n];
    //memset(arr, 0, sizeof(arr));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=false;
        }
    }
    int l = 1;
    for (int i = 0; i < n; ++i)
        arr[i][i] = true;
 
     int start = 0;
    for (int i = 0; i < n-1; ++i)
    {
        if (A[i] == A[i+1])
        {
            arr[i][i+1] = true;
            start = i;
            l= 2;
        }
    }
    for (int k = 3; k <= n; ++k)
    {
        for (int i = 0; i < n-k+1 ; ++i)
        {
            int j = i + k - 1;
 
            if (arr[i+1][j-1] && A[i] == A[j])
            {
                arr[i][j] = true;
 
                if (k > l)
                {
                    start = i;
                    l = k;
                }
            }
        }
    }
    return A.substr(start,l); */
}
