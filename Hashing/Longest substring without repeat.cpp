int Solution::lengthOfLongestSubstring(string A) {
    set<char>st;
    int beg=0;
    int len=0;
    for(int i=0;i<A.length();i++)
    {
        if(st.find(A[i])==st.end())
        {
            st.insert(A[i]);
        }
        else
        {
            while(A[beg]!=A[i])
            {
                st.erase(A[beg]);
                beg++;
            }
            beg++;
        }
        len=max(len,i-beg+1);
    }
    return len;
}
