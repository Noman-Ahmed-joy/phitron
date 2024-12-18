#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
bool visited[N];
vector<int> v[N];
void dfs(int src)
{
    cout<<src<<endl;
    visited[src]=true;
    for(int child:v[src])
    {
        if(!visited[child])
        {
            dfs(child);
        }
    }
}
int main()
{
  int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(visited,false,sizeof(visited));
    int count=0;
    for(int i=0;i<n;i++)
    {
      if(!visited[i])
      {
        dfs(i);
        count++;
      }
    }
    cout<<count<<endl;
  return 0;
}