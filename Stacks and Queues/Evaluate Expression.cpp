int Solution::evalRPN(vector<string> &A) {
    stack<int> st;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=="+" )
        {
            int t1=st.top();
            st.pop();
            int t2=st.top();
            st.pop();
            st.push(t1+t2);
        }
        else if(A[i]=="-")
        {
            int t1=st.top();
            st.pop();
            int t2=st.top();
            st.pop();
            st.push(t2-t1);
        }
        else if(A[i]=="*")
        {
            int t1=st.top();
            st.pop();
            int t2=st.top();
            st.pop();
            st.push(t1*t2);
        }
        else if(A[i]=="/")
        {
            int t1=st.top();
            st.pop();
            int t2=st.top();
            st.pop();
            st.push(t2/t1);
        }
        else
        {
            st.push(stoi(A[i]));
        }
    }
    return st.top();
}
