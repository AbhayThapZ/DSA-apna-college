#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int time;
    vector<int> dt, low;

    void dfs(int u, int parU,
             vector<vector<int>> &adj,
             vector<vector<int>> &bridges)
    {

        // Discovery time and low value
        dt[u] = low[u] = ++time;

        for (int i = 0; i < adj[u].size(); i++)
        {

            int v = adj[u][i];

            // If v is not visited
            if (dt[v] == -1)
            {

                dfs(v, u, adj, bridges);

                // Update low value
                low[u] = min(low[u], low[v]);

                // Bridge condition
                if (low[v] > dt[u])
                {
                    bridges.push_back({u, v});
                }
            }

            // Back edge
            else if (v != parU)
            {
                low[u] = min(low[u], dt[v]);
            }
        }
    }

    vector<vector<int>> criticalConnections(
        int n,
        vector<vector<int>> &connections)
    {

        // Create adjacency list
        vector<vector<int>> adj(n);

        for (int i = 0; i < connections.size(); i++)
        {

            int u = connections[i][0];
            int v = connections[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Initialize
        time = 0;
        dt.assign(n, -1);
        low.assign(n, 0);

        vector<vector<int>> bridges;

        // DFS for all components
        for (int i = 0; i < n; i++)
        {

            if (dt[i] == -1)
            {
                dfs(i, -1, adj, bridges);
            }
        }

        return bridges;
    }
};

int main()
{

    int n = 4;

    vector<vector<int>> connections = {
        {0, 1},
        {1, 2},
        {2, 0},
        {1, 3}};

    Solution obj;

    vector<vector<int>> ans = obj.criticalConnections(n, connections);

    cout << "Critical Connections: " << endl;

    for (auto bridge : ans)
    {
        cout << "[" << bridge[0] << ", " << bridge[1] << "]" << endl;
    }

    return 0;
}