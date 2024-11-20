#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
int n, m;
int maze[N][N];
int visited[N][N];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

bool valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && maze[x][y] != -1;
}

int bfs(int x, int y)
{
    int cnt=0;
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;
    while (!q.empty())
    {
        auto parent = q.front();
        q.pop();
        cnt++;
        for (int i = 0; i < 4; i++)
        {
            int new_x = parent.first + dx[i];
            int new_y = parent.second + dy[i];
            if (valid(new_x, new_y))
            {
                q.push({new_x, new_y});
                visited[new_x][new_y] = true;
            }
        }
    }
    return cnt;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                maze[i][j] = -1;
            else
            {
                maze[i][j] = 0;
            }
         
        }
    }
    vector<int>sizes;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (maze[i][j] == 0 && !visited[i][j])
            {
                int size=bfs(i, j);
                sizes.push_back(size);
            }
        }
    }
    sort(sizes.begin(),sizes.end());
    for(auto sz:sizes)
    {
        cout<<sz<<" ";
    }
    if(sizes.empty())
    {
        cout<<0;
    }
    return 0;
}
