#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lcs(string s, string t) {

        int dp[10][10] = {{0}};
        int n = s.size();
        int m = t.size();

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s[i - 1] == t[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[n][m];
    }
};

int main()
{
    Solution solve;
    cout<<solve.lcs("babbb", "bbbab");

    return 0;
}