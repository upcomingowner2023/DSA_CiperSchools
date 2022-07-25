#include <bits/stdc++.h>

using namespace std;

int helper(int n, unordered_map<int, int> &visited)
{
    if (n <= 0)
        return 1;
    if (visited[n])
        return visited[n];

    int r = n * helper(n - 1, visited);
    visited[n] = r;
    return r;
}

int fact(int n)
{
    unordered_map<int, int> visited;
    return helper(n, visited);
}

int main()
{
    cout << fact(5) << endl;
    return 0;
}