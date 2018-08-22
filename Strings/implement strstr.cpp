int Solution::strStr(const string A, const string B) {
    if(B.length()==0)
        return -1;
    if(A.length()<B.length())
        return -1;
    for(int i=0;i<=A.length()-B.length();i++)
    {
        string temp=A.substr(i,B.length());
        if(temp==B)
            return i;
    }
    return -1;
}
