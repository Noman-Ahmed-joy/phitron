#include <bits/stdc++.h>
using namespace std;

char a[20][20];
bool visit[20][20];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n, m;
bool valid(int ci, int cj)
{
    if (ci < 0 || ci >= n || cj < 0 || cj >= m)
        return false;
    return true;
}
void dfs(int si, int sj)
{
    cout << si << " " << sj << endl;
    visit[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first; //children
        int cj = sj + d[i].second;
        if(valid(ci,cj)==true&&visit[ci]
        [cj]==false) // jodi unvisited index thake
        {
            dfs(ci,cj);   
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
    int si, sj; // source
    cin >> si >> sj;
    memset(visit, false, sizeof(visit));
    dfs(si, sj);
    return 0;
}