#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // dfs traversal
    void dfs(vector<int> &ans, int node, vector<int> &vis, vector<vector<int>> graph)
    {
        vis[node] = 1;
        ans.push_back(node);
        for (auto it : graph[node])
        {
            if (!vis[it])
                dfs(ans, it, vis, graph);
        }
    }

    // bfs traversal
    void bfs(vector<int> &ans, int node, vector<int> &vis, vector<vector<int>> graph)
    {
        queue<int> q;
        q.push(node);
        vis[node] = 1;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            ans.push_back(node);

            for (auto it : graph[node])
            {
                if (!vis[it])
                {
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
    }
};

int main()
{
    vector<vector<int>> graph = {{1, 2}, {1, 2}, {2}, {2}, {0, 1, 3}};
    vector<int> vis(5, 0);
    vector<int> ans;
    int cnt = 0;
    for (int i = 0; i < 5; i++)
    {
        if (!vis[i])
        {
            cnt++;
            // Solution().dfs(ans, i, vis, graph);
            Solution().bfs(ans, i, vis, graph);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl
         << cnt;

    return 0;
};