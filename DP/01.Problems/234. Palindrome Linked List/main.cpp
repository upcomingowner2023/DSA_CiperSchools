/**
 * Time : O(n)
 * Space : O(n)
 */

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        stack<int> s;
        ListNode *t = head;
        while (t)
        {
            s.push(t->val);
            t = t->next;
        }
        t = head;
        while (t)
        {
            if (t->val != s.top())
                return false;
            s.pop();
            t = t->next;
        }
        return true;
    }
};

/**
 * Time : O(n)
 * Space : O(1)
 */
class Solution
{
    ListNode *reverse(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *tmp;
        while (head != NULL)
        {
            tmp = head->next;
            head->next = prev;
            prev = head;
            head = tmp;
        }
        return prev;
    }

public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *slow = head, *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        if (fast != NULL)
            slow = slow->next;

        slow = reverse(slow);
        fast = head;

        while (slow != NULL)
        {
            if (slow->val != fast->val)
                return false;
            slow = slow->next;
            fast = fast->next;
        }

        return true;
    }
};