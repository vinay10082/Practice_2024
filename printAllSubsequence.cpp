#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printArraywithSumK(vector<int> ans, int k)
    {
        int sum = accumulate(ans.begin(), ans.end(), sum);
        if (sum == k)
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    void printAllSubsequences(int element, vector<int> &ans, vector<int> nums, int n)
    {
        if (element == n)
        {
            printArraywithSumK(ans, 3);
            return;
        }
        ans.push_back(nums[element]);
        printAllSubsequences(element + 1, ans, nums, n);
        ans.pop_back();
        printAllSubsequences(element + 1, ans, nums, n);
        return;
    }
};

int main()
{
    vector<int> nums = {3, 1, 2};
    vector<int> ans;
    Solution solve;
    solve.printAllSubsequences(0, ans, nums, nums.size());
    return 0;
}