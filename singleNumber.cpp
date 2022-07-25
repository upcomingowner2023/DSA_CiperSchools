#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int size = nums.size();
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }

        for (int i = 1; i < nums.size(); i += 2)
        {
            if (nums[i] != nums[i - 1])
                return nums[i - 1];
        }
        return nums[nums.size() - 1];
    }
};

int main()
{

    vector<int> nums{4, 1, 2, 1, 2};
    Solution s;
    cout << s.singleNumber(nums) << endl;
    return 0;
}