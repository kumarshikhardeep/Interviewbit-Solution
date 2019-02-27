void gengray(vector<int>&res,int A,int cur)
{
    if(A==cur)
        return;
    int ind=res.size()-1;
    for(int i=ind;i>=0;i--)
    {
        res.push_back((1<<cur) + res[i]);
    }
    gengray(res,A,cur+1);
    return;
}

vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int> res;
    if(A==0)
        return res;
    res.push_back(0);
    res.push_back(1);
    
    gengray(res,A,1);
    return res;
}
