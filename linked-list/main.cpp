#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data) : data(data), next(nullptr) {}
};

void display(Node *head)
{
    if (head == NULL)
    {
        cout << "\n\nList is empty.\n";
        return;
    }
    Node *t = head;
    cout << "Elements are: ";
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

void printll(Node *head)
{
    if (head == nullptr)
        return;
    cout << head->data << " ";
    printll(head->next);
}

Node *makeLinked()
{
    Node *head, *tail;
    head = tail = nullptr;
    int data;
    cout << "Enter element: ";
    cin >> data;

    while (data != -1)
    {
        Node *node = new Node(data);

        if (head == nullptr)
        {
            head = tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
        cout << "Enter new element: ";
        cin >> data;
    }
    return head;
}

int count(Node *head)
{
    int c = 0;
    Node *t = head;
    while (t != NULL)
    {
        c++;
        t = t->next;
    }
    return c;
}
int length(Node *head)
{
    if (head == nullptr)
        return 0;
    return length(head->next) + 1;
}

Node *reverse(Node *head)
{
    Node *tmp, *ptr1 = NULL, *ptr2 = NULL;
    tmp = head;
    while (tmp != NULL)
    {
        ptr1 = tmp->next;
        tmp->next = ptr2;
        ptr2 = tmp;
        tmp = ptr1;
    }
    head = ptr2;
    return head;
}

Node *reverseR(Node *head)
{
    if (head == nullptr || head->next == nullptr)
        return head;

    Node *next = head->next;
    Node *newHead = reverseR(next);
    next->next = head;
    head->next = nullptr;
    return newHead;
}

bool hasCycle(Node *head)
{
    unordered_map<Node *, int> f;
    while (head)
    {
        f[head]++;
        head = head->next;
        if (f[head] > 0)
            return true;
    }
    return false;
}

int main()
{
    Node *head = makeLinked();
    display(head);
    cout << "Total elements are: " << count(head) << endl;
    cout << length(head) << endl;

    // Node *newHead = reverse(head);
    // display(newHead);

    Node *newHead1 = reverseR(head);
    display(newHead1);
    return 0;
}