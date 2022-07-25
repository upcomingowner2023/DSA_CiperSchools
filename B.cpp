#include <bits/stdc++.h>

using namespace std;

long solve(vector<int> &A, vector<int> &B, int C)
{
    if (A.size() == C)
        return 0;

    vector<int> dis;
    for (int i = 0; i < A.size(); i++)
    {
        // if (ans > (A[i + 1] - A[i]) * B[i])
        dis.push_back((A[i + 1] - A[i]) * B[i]);
    }
    for (int n : dis)
        cout << n << " ";
    return 0;
}

int main()
{
    vector<int> A = {1, 3, 11, 16, 22, 25, 26, 33, 40, 50};
    vector<int> B = {4, 6, 9, 1, 1, 6, 7, 1, 4, 1};
    int C = 6;
    cout << solve(A, B, C) << endl;
    return 0;
}
