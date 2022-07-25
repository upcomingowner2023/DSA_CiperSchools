#include <bits/stdc++.h>

using namespace std;

vector<int> nextGreaterElement(vector<int> &findNums, vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    unordered_map<int, int> nextG;
    nextG[nums[n - 1]] = -1;
    for (int i = n - 2; i >= 0; i--)
    {
    }
    return ans;
}

vector<int> dailyTemperatures(vector<int> &temperatures)
{
    vector<int> ans;
    int n = temperatures.size();
    stack<int> s;
    ans.push_back(0);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!s.empty() && temperatures[s.top()] < temperatures[i])
            s.pop();
        if (s.empty())
            ans.push_back(0);
        else
            ans.push_back(s.top() - i);
        s.push(i);
    }
    return ans;
}

int main()
{
    // vector<int> nums1 = {4, 1, 2};
    // vector<int> nums2 = {1, 3, 4, 2};
    // vector<int> ans = nextGreaterElement(nums1, nums2);
    // for (int n : ans)
    //     cout << n << " ";
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};

    vector<int> ans = dailyTemperatures(temperatures);
    for (int n : ans)
        cout << n << " ";

    return 0;
}