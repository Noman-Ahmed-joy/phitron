#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    int mat[n][n];
    memset(mat,0,sizeof(mat));
    while(e--)
    {
       int a,b;
       cin>>a>>b;
       mat[a][b] = 1;
    }
    int q;
    cin>>q;
    while(q--)
    {
      int sr,dst;
      cin>>sr>>dst;
      if(sr == dst || mat[sr][dst] == 1) 
        cout << "YES\n";
      else
        cout << "NO\n";
    }
    return 0;
}
