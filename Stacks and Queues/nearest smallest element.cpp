vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> ans;
    stack<int> st;
    st.push(-1);
    for(int i=0;i<A.size();i++)
    {
        while(A[i]<=st.top())
        {
            st.pop();
        }
        ans.push_back(st.top());
        st.push(A[i]);
    }
    return ans;
}