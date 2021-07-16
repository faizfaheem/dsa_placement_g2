
    
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[11]={3,6,-1,3,9,7,7,2,3,11};
    int k=4;
    int c=0;
    unordered_set<int>hs;
    for(int i=0;i<11;i++)
    {
        hs.insert(a[i]);
    }

       for (auto it = hs.begin(); it !=
                             hs.end(); it++)
    {
        int a=*it;
        cout<<a;
        int b=a-k;
        cout<<b;
        cout<<endl;
        if(hs.find(b)!=hs.end()){
            c++;
        }
     
    }
       cout<<c<<endl;
  
}

