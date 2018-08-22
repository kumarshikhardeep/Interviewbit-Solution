string Solution::countAndSay(int A) {
    string s="1";
    if(A==1)
        return s;
    s="11";
    if(A==2)
        return s;
    int i=3;
    string p="";
    int j;
    while(i<=A)
    {
        int l=s.length();
        int count=1;
        for( j=1;j<l;j++)
        {
            if(s[j]==s[j-1])
            {
                count++;
            }
            else
            {
                p+=to_string(count);
                p+=s[j-1];
                count=1;
            }
        }
        p+=to_string(count);
        p+=s[j-1];
        s=p;
      
        p="";
        i++;
    }
    return s;
}
