#include <bits/stdc++.h>

using namespace std;

int helper(int n, unordered_map<int, int> &steps)
{
    if (n == 1)
        return 0;
    if (steps[n])
        return steps[n];
    int r1 = helper(n - 1, steps);
    int r2 = INT_MAX, r3 = INT_MAX;
    if (n % 2 == 0)
        r2 = helper(n / 2, steps);
    if (n % 3 == 0)
        r3 = helper(n / 3, steps);

    int minS = min(min(r1, r2), r3) + 1;
    steps[n] = minS;
    return minS;
}

int minStep(int n)
{
    unordered_map<int, int> steps;
    return helper(n, steps);
}

int main()
{
    cout << minStep(10) << endl;
    return 0;
}