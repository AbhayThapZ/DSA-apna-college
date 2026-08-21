// Leetcode 210
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution
{
public:
    bool isCycleDFS(int src,
                    vector<bool> &vis,
                    vector<bool> &recPath,
                    vector<vector<int>> &edges)
    {
        vis[src] = true;
        recPath[src] = true;

        for (int i = 0; i < edges.size(); i++)
        {
            int v = edges[i][0];
            int u = edges[i][1];

            if (src == u)
            {
                if (!vis[v])
                {
                    if (isCycleDFS(v, vis, recPath, edges))
                    {
                        return true;
                    }
                }
                else if (recPath[v])
                {
                    // Back Edge -> Cycle
                    return true;
                }
            }
        }

        recPath[src] = false;
        return false;
    }

    void topoOrder(int src,
                   vector<bool> &vis,
                   stack<int> &s,
                   vector<vector<int>> &edges)
    {
        vis[src] = true;

        for (int i = 0; i < edges.size(); i++)
        {
            int v = edges[i][0];
            int u = edges[i][1];

            if (src == u)
            {
                if (!vis[v])
                {
                    topoOrder(v, vis, s, edges);
                }
            }
        }

        s.push(src);
    }

    vector<int> findOrder(int numCourses,
                          vector<vector<int>> &prerequisites)
    {
        vector<bool> vis(numCourses, false);
        vector<bool> recPath(numCourses, false);

        vector<int> ans;

        // Step 1: Detect Cycle
        for (int i = 0; i < numCourses; i++)
        {
            if (!vis[i])
            {
                if (isCycleDFS(i, vis, recPath, prerequisites))
                {
                    return ans;
                }
            }
        }

        // Step 2: Topological Sort
        stack<int> s;

        vis.assign(numCourses, false);

        for (int i = 0; i < numCourses; i++)
        {
            if (!vis[i])
            {
                topoOrder(i, vis, s, prerequisites);
            }
        }

        // Step 3: Store Topological Order
        while (!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    int numCourses = 4;

    vector<vector<int>> prerequisites = {
        {1, 0},
        {2, 0},
        {3, 1},
        {3, 2}};

    vector<int> result = obj.findOrder(numCourses, prerequisites);

    cout << "Course Order: ";

    for (int course : result)
    {
        cout << course << " ";
    }

    cout << endl;

    return 0;
}