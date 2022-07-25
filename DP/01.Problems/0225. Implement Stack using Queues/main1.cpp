/*
Using two queues
*/
class MyStack
{
public:
    queue<int> s1;
    queue<int> s2;

    MyStack()
    {
    }

    void push(int x)
    {
        s2.push(x);
        while (!s1.empty())
        {
            s2.push(s1.front());
            s1.pop();
        }

        while (!s2.empty())
        {
            s1.push(s2.front());
            s2.pop();
        }
    }

    int pop()
    {
        if (s1.empty())
        {
            return -1;
        }
        int x = s1.front();
        s1.pop();
        return x;
    }

    int top()
    {
        if (s1.empty())
        {
            return -1;
        }
        return s1.front();
    }

    bool empty()
    {
        return s1.empty();
    }
};