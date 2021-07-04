#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r,i,fi;
        int l=0,R=n-1,s,m;
        cin>>n;
        cin>>r;
        int mid=(l+R)/2;
           int a[n];
           for(i=0;i<n;i++)
           {
               cin>>a[i];
           }
           sort(a,a+n);
            for(int k=0;k<n;k++)
           {
               cout<<a[i];
           }for(int i=0;i<n;i++)
           {s=0;
           m=0;
               if(a[i]<=a[mid])
               s=s+a[i];
               else
               m=m+a[i];
           }
           fi=(m-n)/r;
           cout<<fi<<endl;
           
    }
      return(0);
}