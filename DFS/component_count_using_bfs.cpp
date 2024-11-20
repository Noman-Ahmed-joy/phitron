#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
int bfs(int src)
{
    int c = 0;
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        c++;
        for (int child : adj[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
            }
        }
    }
    return c;
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    while (edge--)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int count = 0;
    for (int i = 1; i <= node; i++)
    {
        if (!visited[i])
        {
            int sz = bfs(i);
            if (sz > 1)
                count++;
        }
    }
    cout << "component:" << count << endl;
    return 0;
}