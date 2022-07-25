#include <bits/stdc++.h>

using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{

    vector<int> ans;
    long low = 1, end = nums.size() - 1;
    while (end >= low)
    {
        int mid = low + (end - low) / 2;

        if (nums[mid] == target)
            ans.push_back(nums[mid]);
        else if (nums[mid] > target)
            end = mid - 1;
        else
            low = mid + 1;
    }
    return ans;
}

int mySqrt(int num)
{
    long low = 1, mid = num;
    while (mid >= low)
    {
        mid = low + (mid - low) / 2;
        if (mid * mid == num)
            return mid;
        else if (mid * mid > num)
            mid -= 1;
        else
        {
            low = mid + 1;
            mid = low + mid;
        }
    }
    return mid;
}

int main()
{
    cout << mySqrt(4) << endl;
    cout << mySqrt(8) << endl;
    cout << mySqrt(0) << endl;
    return 0;
}