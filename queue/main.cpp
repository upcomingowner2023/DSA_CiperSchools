#include <bits/stdc++.h>

using namespace std;

class MyQueue
{
    stack<int> s;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        if (s.empty())
            s.push(x);
        else
        {
            int t = s.top();
            s.pop();
            push(x);
            s.push(t);
        }
    }

    int pop()
    {
        int t = s.top();
        s.pop();
        return t;
    }

    int peek()
    {
        return s.top();
    }

    bool empty()
    {
        return s.empty();
    }
};

int main()
{
    MyQueue *obj = new MyQueue();
    obj->push(15);
    obj->push(96);
    obj->push(74);
    cout << obj->pop() << endl;
    cout << obj->peek() << endl;
    // cout << obj->peek() << endl;
    // cout << obj->empty() << endl;
    return 0;
}