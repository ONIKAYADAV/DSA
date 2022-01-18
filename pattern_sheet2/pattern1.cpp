#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int n, s=0, e=n, k, c;
  cin>>n;
  for(int i=0;s!=1;i++)
  {
    s=1,e=n-i,k=i,c=1;
    while(k>=0)
    {
      cout<<c;
      //s++;
      k--;
      c++;
    }
    for(int j=0;j<n;j++)
    {
      if(j>i && j<(n-i-1))
      {
        cout<<" ";
        c++;
        s=2;
      }
    }
    //if(c==s)
      //e+=1;
    while(c<=n)
    {
      cout<<c;
      //e++;
      c++;
    }
    cout<<endl;
    e=i;
  }
  for(int m=1;m<(n-e);m++)
  {
    c=1,k=0;
    while(k<(n-e-m))
    {
      cout<<c;
      c++;
      k++;
    }
    s=1;
    for(int z=0;z<n;z++)
    {
      if(z>=(n-e-m) && z<=(n-e+m) && s<=(2*m-1))
      {
        cout<<" ";
        c++;
        s++;
      }
    }
    while(c<=n)
    {
      cout<<c;
      //e++;
      c++;
    }
    cout<<endl;
  }
  return 0;
}