stack<int> stk;
stack<int> sp;

MinStack::MinStack() {
    while(!stk.empty()){
        stk.pop();
    }
    while(!sp.empty()){
        sp.pop();
    }

}

void MinStack::push(int x) {
    if(stk.empty())
    {
        sp.push(x);
    }
    else
    {
        sp.push(min(sp.top(),x));
    }
    stk.push(x);
}

void MinStack::pop() {
    if(stk.empty())
        return;
    stk.pop();
    sp.pop();
}

int MinStack::top() {
    if(stk.empty())
        return -1;
    return stk.top();
}

int MinStack::getMin() {
    if(sp.empty())
        return -1;
    return sp.top();
}
