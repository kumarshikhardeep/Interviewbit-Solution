int Solution::isPalindrome(string A) {
    int l=A.size();
    string s="";
    for(int i=0;i<l;i++)
    {
        if(A[i]>='a' && A[i]<='z')
        {
            char c=A[i]-'a';
            s+=c;
        }
        if(A[i]>='A' && A[i]<='Z')
        {
            char c=A[i]-'A';
            s+=c;
        }
        if(A[i]>='0' && A[i]<='9')
        {
            s+=A[i];
        }
    }
    //cout<<s<<endl;
    l=s.size();
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-i-1])
            return 0;
    }
    return 1;
}
