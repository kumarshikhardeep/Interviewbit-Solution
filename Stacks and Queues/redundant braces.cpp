int Solution::braces(string A) {
    stack<char> st;
    for(int i=0;i<A.length();i++)
    {
        if(st.size()==0)
            st.push(A[i]);
        else{
        if(A[i]!=')')
        {
            st.push(A[i]);
        }
        else
        {
            int c=0;
            while(st.size()!=0 && st.top()!='(')
            {
                if(st.top()=='+'||st.top()=='/'||st.top()=='*'||st.top()=='-')
                    c++;
                st.pop();
            }
            if(c==0)
                return 1;
            if(st.size()!=0)
                st.pop();
            
        }
        }
    }
    return 0;
}
