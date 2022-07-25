#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data) : data(data), next(nullptr) {}
};

class Stack
{
    int s;
    Node *head;

public:
    Stack() : s(0), head(nullptr) {}

    int size()
    {
        return s;
    }

    bool isEmpty()
    {
        return s == 0;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        s++;
    }

    int pop()
    {
        if (!head)
            throw "Stack is empty.";
        int data;
        Node *t = head;
        head = head->next;
        data = t->data;
        delete t;
        s--;
        return data;
    }

    int top()
    {
        if (!head)
            throw "Stack is empty.";
        return head->data;
    }
};

bool isValid(string s)
{
    if (s.length() % 2 != 0)
        return false;

    stack<char> st;
    for (char c : s)
    {
        if ((c == ')' || c == ']' || c == '}') && !st.empty())
        {
            if ((c == ')' && st.top() == '(') || (c == '}' && st.top() == '{') || (c == ']' && st.top() == '['))
            {
                st.pop();
                continue;
            }
        }
        st.push(c);
    }
    return st.empty();
}

int main()
{
    cout << isValid("()") << endl;
    cout << isValid("(]") << endl;
    cout << isValid("([}}])") << endl;
    return 0;
}