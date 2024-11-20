#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> v[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b); // for directed graph
        v[b].push_back(a);
    }
    for (int i = 0; i < v[3].size(); i++)
    {
        cout << v[3][i] << " ";
    }
    return 0;
}