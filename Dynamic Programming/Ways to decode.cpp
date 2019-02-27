int count(string A, int arr[], int k)
{
    if(k==0)
        return 1;
    int s=A.length()-k;
    if(A[s]=='0')
        return 0;
    if(arr[k]!=-1)
        return arr[k];
    int result=count(A,arr,k-1);
    if(k>=2 && stoi(A.substr(s,2))<=26)
        result+=count(A,arr,k-2);
    arr[k]=result;
    return result;
}
int Solution::numDecodings(string s) {
//     int arr[A.length()+1];
//     for(int i=0;i<A.length()+1;i++)
//         arr[i]=-1;
//   // printf("%d\n",stoi(A.substr(1,3)));
//     return count(A,arr,A.length());
    
    if(s[0]=='0')
    return 0;
    int n = s.size();
    int dp[n+1];
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        int var = (s[i-2]-'0')*10+(s[i-1]-'0');
        if(s[i-1]=='0'){
            if(var==10 || var == 20 )
                dp[i]=dp[i-2];
            else
                return 0;
            
        }
        else{
            if(var > 26)
                dp[i]=dp[i-1];
            else if(var >= 1 && var <=9 )
                dp[i]=dp[i-1];
            else
                dp[i]=dp[i-1]+dp[i-2];
            
        }
        
    }
    return dp[n];
   
   
    
}
