#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector<int> arr)
{
    unordered_map<int, int> f;
    int max = 0;
    for (int n : arr)
    {
        f[n]++;
        if (f[n] > max)
            max = f[n];
    }

    cout << "max: " << max << endl;
    int c = 0;
    for (auto m : f)
    {
        c += m.second;
    }
    return c - max;
}

int main()
{

    vector<int> nums = {35, 65, 69, 28, 12, 69, 37, 80, 80, 50, 80, 50, 15, 57, 79, 69, 57, 65, 15, 69, 57, 50, 65, 2, 14, 64, 15, 65, 65, 5, 15, 64, 57, 37, 50, 12, 64, 37, 28, 20, 80, 80, 50};
    cout << equalizeArray(nums) << endl;
    return 0;
}