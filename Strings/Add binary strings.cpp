string Solution::addBinary(string A, string B) {
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    int maxlen=A.length()>=B.length()?A.length():B.length();
    string s="";
    int a,b,c=0;
    for(int i=0;i<maxlen;i++)
    {
        
        if(i>=A.length())
            a=0;
        else
            a=A[i] - '0';
        
        if(i>=B.length())
            b=0;
        else
            b=B[i] - '0';
        int temp=a+b+c;
        if(temp>=2)
            c=1;
        else
            c=0;
        s+=to_string(temp%2);
    }
    if(c==1)
        s+='1';
    reverse(s.begin(),s.end());
    return s;
}
