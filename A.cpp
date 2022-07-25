#include <bits/stdc++.h>

using namespace std;

vector<long long> solve(int A, vector<vector<int>> &B)
{
    vector<long long> ans;
    int X[] = {0};
    int Y[] = {0};
    for (int i = 0; i < A; i++)
    {
        if (B[i][0] == 1)
        {
            int L = B[i][1];
            int R = B[i][2];
            for (; L < R; L++)
            {
                X[L] = !X[L];
            }
        }
        else if (B[i][0] == 2)
        {
            cout << "b : " << B[i][1] << endl;
            for (int j = 0; j < A; j++)
            {
                cout << Y[j] << " ";
                int p = Y[j] + (X[j] * B[i][1]);
                // cout << "P: " << p;
                // Y[j] = Y[j] + (X[j] * B[i][1]);
            }
        }
        else if (B[i][0] == 3)
        {
            ans.push_back(B[i][1]);
        }
        cout << " Done" << endl;
    }
    return ans;
}

int main()
{
    int A = 5;
    vector<vector<int>> B = {{1, 2, 3},
                             {2, 5, 0},
                             {1, 1, 4},
                             {3, 4, 0},
                             {2, 6, 0},
                             {3, 1, 0}};
    vector<long long> ans = solve(A, B);

    for (auto n : ans)
        cout << n << " ";
    return 0;
}