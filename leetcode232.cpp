class MyQueue
{
    int peak = INT_MAX;
    stack<int> st1, st2;

public:
    MyQueue()
    {
        while (!st1.empty())
        {
            st1.pop();
        }
        while (!st2.empty())
        {
            st2.pop();
        }
    }

    void push(int x)
    {
        st1.push(x);
        if (peak == INT_MAX)
        {
            peak = x;
        }
    }

    int pop()
    {
        while (!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        int j = st2.top();
        st2.pop();
        peak = st2.empty() ? INT_MAX : st2.top();
        while (!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return j;
    }

    int peek()
    {
        return peak;
    }

    bool empty()
    {
        return st1.empty();
    }