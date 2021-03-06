string Solution::fractionToDecimal(int A, int B) {
     if (A == 0)
        return "0";
    long int n = A, d = B;
    string res = "";
    
    if ((n < 0) ^ (d < 0))      
        res += '-';
    
    n = abs(n), d = abs(d);
    
    res += to_string(n/d);
    long int rem = n%d;
    
    if (rem == 0)
        return res;
    
    res += '.';
    
    unordered_map<int, int> m;
    
    for (; rem; rem %= d)
    {
        if (m.find(rem) != m.end())
        {
            res.insert(m[rem], 1, '(');
            res.push_back(')');
            break;
        }
        
        m[rem] = res.size();
        rem *= 10;
        res.push_back('0' + rem/d);
    }
    return res;
}
