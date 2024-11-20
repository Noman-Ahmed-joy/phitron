#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>&adj,int src,vector<bool>&visited)
{
   queue<int>q;
   visited[src]=true;
   q.push(src);
   while(!q.empty())
   {
    int parent=q.front();
    q.pop();
    cout<<parent<<" ";
    for(int child:adj[parent])
    {
        if(!visited[child])
        {
            visited[child]=true;
            q.push(child);
        }
    }
   }
}
void addEdge(vector<vector<int>>&adj,int u,int v)
{
    adj[u].push_back(v);
}
int main()
{
  int v;
  cout<<"Number of Vertices:"<<endl;
  cin>>v;
  vector<vector<int>>adj(v);
  addEdge(adj,0,1);
  addEdge(adj,0,2);
  addEdge(adj,1,3);
  addEdge(adj,1,4);
  addEdge(adj,2,4);

  vector<bool>visited(v,false);
  bfs(adj,0,visited);
  return 0;
}