string Solution::convertToTitle(int A) {
    vector<int>c;
    while(A!=0)
    {
        if(A%26==0)
        {
            c.push_back(26);
            A=A/26 - 1;
        }
        else
        {
            c.push_back(A%26);
            A=A/26;
        }
    }
    string s="";
   for(int i=c.size()-1;i>=0;i--)
    {
        s+=('A'+c[i]-1);
        
    }
    return s;
}
