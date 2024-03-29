#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
//Only applicable to "Directed Acyclic Graph"
    void topoSort(stack<int>& st, int node, vector<int> &vis, vector<vector<int>> graph)
    {
        vis[node] = 1;
        st.push(node);
        for (auto it : graph[node])
        {
            if (!vis[it])
                topoSort(st, it, vis, graph);
        }
    }
};
int main()
{
    vector<vector<int>> graph = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
    vector<int> vis(6, 0);
    stack<int> st;
    for (int i = 0; i < 6; i++)
    {
        if (!vis[i])
        {
            Solution().topoSort(st, i, vis, graph);
        }
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}