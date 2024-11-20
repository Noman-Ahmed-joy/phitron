#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool visit[N];
vector<int> adj[N];
int parentArray[N];
bool ans;

void dfs(int parent)
{
    visit[parent]=true;
    for(int child:adj[parent])
    {
        if(!visit[child] && child!=parentArray[parent])
        {
            ans=true;
        }
        if(visit[child])
        {
            parentArray[child]=parent;
            dfs(child);
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
        adj[a].push_back(b);
        adj[a].push_back(b);
    }
    memset(visit, false, sizeof(visit));
    memset(parentArray, -1, sizeof(parentArray));
    ans = false;
    for (int i = 0; i < n; i++)
    {
        if (!visit[i])
        {
            dfs(i);
        }
    }
    if (ans)
        cout << "Cycle found";
    else
        cout << "Cycle not found";
  return 0;
}
