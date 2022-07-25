#include <bits/stdc++.h>

using namespace std;

int linear_search(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
            return i;
    }

    return -1;
}

bool check_the_val(vector<int> &v, int x)
{
    int start = 0, end = v.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == x)
            return true;
        else if (v[mid] > x)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return false;
}

int main()
{
    vector<int> nums{1, 5, 3, 6, 7, 9};
    // cout << linear_search(nums, 3) << endl;
    cout << check_the_val(nums, 6) << endl;
    cout << check_the_val(nums, 10) << endl;
    return 0;
}