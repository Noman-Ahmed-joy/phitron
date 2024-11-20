#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
bool visit[N];
bool pathVisit[N];
vector<int> adj[N];
bool ans;
void dfs(int parent)
{
  visit[parent] = true;
  pathVisit[parent] = true;
  for (int child : adj[parent])
  {
    if (pathVisit[child])
    {
      ans = true;
    }
    if (!visit[child])
    {
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
  }
  memset(visit, false, sizeof(visit));
  memset(pathVisit, false, sizeof(pathVisit));
  ans = false;
  for (int i = 0; i < n; i++)
  {
    if (!visit[i])
    {
      dfs(i);
    }
  }
  if (ans)
    cout << "Cycle Dicected" << endl;
  else
    cout << "Cycle unditected" << endl;
  return 0;
}