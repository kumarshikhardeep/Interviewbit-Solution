/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool cmp(Interval a,Interval b)
{
    
    return a.start<b.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end(),cmp);
    vector<Interval> toreturn;
    for(int i=0;i<A.size();i++)
    {
        if(toreturn.size() == 0)
        {
            toreturn.push_back(A[i]);
        }
        else
        {
            Interval last = toreturn.back();
            if(last.end >= A[i].start)
            {
                toreturn.pop_back();
                last.end = max(last.end,A[i].end);
                toreturn.push_back(last);
            }
            else
            {
                toreturn.push_back(A[i]);
            }
        }
    }
    return toreturn;
}
