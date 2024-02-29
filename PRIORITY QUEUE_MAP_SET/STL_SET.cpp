#include<bits/stdc++.h>
using namespace std;
//set e duplicate value thakte pare na
//auto sort kore dey
//kono value ache kina ber kore dey count kore
int main()
{
  set<int>s;
  int n;
  cin>>n;
  //insert
  while(n--) //O(nlogN)
  {
    int x;
    cin>>x;
    s.insert(x); //O(logN)
  }
  if(s.count(10))
  {
    cout<<"YES"<<endl;
  }
  else
  cout<<"NO"<<endl;
  //printing set
  // for(auto it=s.begin();it!=s.end();it++)
  // {
  //   cout<<*it<<endl;
  // }
  return 0;
}