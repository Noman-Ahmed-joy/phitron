#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool visit[1005];
int level[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visit[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        cout << parent << endl;
        for (int child : v[parent])
        {
            if (visit[child] == false)
            {
                q.push(child);
                visit[child] = true;
                level[child] = level[parent] + 1;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    bfs(src);
    for(int i=0;i<n;i++)
    {
        cout<<i<<level[i]<<endl;
    }
    return 0;
}