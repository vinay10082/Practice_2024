#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printArray(vector<int> ans)
    {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        return;
    }

    void printAllSubsequences(int element, vector<int> &ans, int sum, vector<int> nums, int k)
    {
        if (element == nums.size())
        {
            if(sum == k) printArray(ans);
            return;
        }
        ans.push_back(nums[element]);
        sum += nums[element];
        printAllSubsequences(element + 1, ans, sum, nums, k);
        ans.pop_back();
        sum -= nums[element];
        printAllSubsequences(element + 1, ans, sum, nums, k);
        return;
    }

};

int main()
{
    vector<int> nums = {3, 1, 2};
    vector<int> ans;
    Solution solve;
    solve.printAllSubsequences(0, ans, 0, nums, 4);
    return 0;
}