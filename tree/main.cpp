#include <bits/stdc++.h>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

// TreeNode *makeTree()
// {
//     int val;
//     cin >> val;
//     if (val == -1)
//         return NULL;
//     TreeNode *root = new TreeNode(val);
//     root->left = makeTree();
//     root->right = makeTree();
//     return root;
// }

TreeNode *makeTree()
{
    int val;
    cin >> val;
    if (val == -1)
        return NULL;
    queue<TreeNode *> q;
    TreeNode *root = new TreeNode(val);
    q.push(root);
    while (!q.empty())
    {
        TreeNode *t = q.front();
        q.pop();
        cout << "Enter left child of " << t->val << " : ";
        cin >> val;
        if (val != -1)
        {
            t->left = new TreeNode(val);
            q.push(t->left);
        }
        cout << "Enter right child of " << t->val << " : ";
        cin >> val;
        if (val != -1)
        {
            t->right = new TreeNode(val);
            q.push(t->right);
        }
    }

    return root;
}

void preOrder(TreeNode *root)
{
    if (root == nullptr)
        return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(TreeNode *root)
{
    if (root == nullptr)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}

void inOrder(TreeNode *root)
{
    if (root == nullptr)
        return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

void displayLevelTravasal(TreeNode *root)
{
    if (root == nullptr)
        return;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        int s = q.size();
        while (s--)
        {
            TreeNode *t = q.front();
            cout << t->val << " ";
            q.pop();
            if (t->left)
                q.push(t->left);
            if (t->right)
                q.push(t->right);
        }
        cout << endl;
    }
}

int main()
{
    TreeNode *root = makeTree();
    // display(root);
    displayLevelTravasal(root);
    return 0;
}