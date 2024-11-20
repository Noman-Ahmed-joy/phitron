#include<bits/stdc++.h>
using namespace std;

bool visit[20][20];
int dis[20][20];
vector<pair<int,int>> d={{0,1},{0,-1},
{-1,0},{1,0}};
int n,m;
char a[20][20];

bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
        return false;
    return true;
}
void bfs(int si,int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    visit[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty())
    {
        pair<int,int>parent;
        parent=q.front();
        int a=parent.first;
        int b=parent.second;
        q.pop();
        //cout<<a<<" "<<b<<endl;
        for(int i=0;i<4;i++)
        {
            int ci=a+d[i].first;
            int cj =b+d[i].second;
            if(valid(ci,cj)==true&&visit[ci][cj]==false)
            {
                q.push({ci,cj});
                visit[ci][cj]=true;
                dis[ci][cj]= dis[a][b]+1;
            }
        }
        
    }
}
int main()
{
    cin >> n >> m;//n=number of rows , m= coloumn number
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
  int si,sj;
  cin>>si>>sj;
  memset(visit,false,sizeof(visit));
  memset(dis,-1,sizeof(dis));
  bfs(si,sj);
  cout<<"shortest path :"<<dis[2][3];
  return 0;
}