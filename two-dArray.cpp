#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code
    vector<vector<int>> nums = {{1, 1, 1, 1}, {1, 0, 0, 1}, {1, 1, 0, 1}, {1, 1, 1, 1}};
    int n = nums.size();
    int col0 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[i][j] == 0)
            {
                nums[i][0] = 0;
                if (j != 0)
                    nums[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (nums[0][j] == 0 || nums[i][0] == 0)
                nums[i][j] = 0;
        }
    }
    for (int j = n - 1; j > 0; j--)
    {
        if (nums[0][j] == 0)
            nums[0][j] = 0;
    }
    if (col0 = 0)
    {
        for (int i = 0; i < n; i++)
        {
            nums[i][0] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}