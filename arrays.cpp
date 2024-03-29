#include <bits/stdc++.h>
using namespace std;

// next permutation

int main()
{
    vector<int> nums = {2, 1, 5, 4, 3, 0, 0};
    int n = nums.size();
    int cnt = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            cnt = i;
            break;
        }
    }

    // edge case - last permutation
    if (cnt == -1)
    {
        reverse(nums.begin(), nums.end());
    }
    // normal permutation
    else
    {
        for (int i = n - 1; i > cnt; i--)
        {
            if (nums[i] > nums[cnt])
            {
                swap(nums[i], nums[cnt]);
                break;
            }
        }

        reverse(nums.begin() + cnt + 1, nums.end());
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}