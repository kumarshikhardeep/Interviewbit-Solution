/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    
    intervals.push_back(newInterval);
    int l=intervals.size()-1;
    for(int i=l;i>0;i--)
    {
        if(intervals[i].start<intervals[i-1].start)
        {
            Interval t=intervals[i];
            intervals[i]=intervals[i-1];
            intervals[i-1]=t;
        }
    }
    vector<Interval> toreturn;
    for(int i=0;i<=l;i++)
    {
        if(toreturn.size()==0)
        {
            toreturn.push_back(intervals[i]);
        }
        else
        {
            Interval last=toreturn.back();
            if(last.end>intervals[i].start)
            {
                toreturn.pop_back();
                last.end=max(last.end,intervals[i].end);
                toreturn.push_back(last);
            }
            else
            {
                toreturn.push_back(intervals[i]);
            }
        }
    }
    return toreturn;
}
