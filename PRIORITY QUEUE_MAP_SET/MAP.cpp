#include <bits/stdc++.h>
using namespace std;
int main()
{
  map<string, int> mp; //O(nlogN)
  mp["sakib al hasan"] = 79;
  mp["Akib"]=79;
  mp["tamim"]=100;
  // mp.insert({"Sakib Al Hasan", 75});
  // mp.insert({"Tamim Iqbal", 19});
  // mp.insert({"Musfiq", 15});

  for (auto it = mp.begin(); it != mp.end(); it++)
  {
    cout << it->first << " " << it->second << endl;
  }
  // if(mp.count("akib"))
  // {
  //   cout<<"True"<<endl;
  // }
  // else
  // cout<<"FAlse"<<endl;
  return 0;
}