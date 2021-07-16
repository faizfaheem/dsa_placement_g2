#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={3,4,2,6,7};
  unordered_set<int> s;
  int f=0;
  for(int i=0;i<5;i++)
  s.insert(a[i]);
  for(int i=0;i<5;i++)
  {
      for(int j=i+1;j<5;j++)
      {if(s.find(a[i]+a[j])!= s.end())
      {
          f++;
      }
          
      }
  }
  cout<<f<<endl;
  
  
}
