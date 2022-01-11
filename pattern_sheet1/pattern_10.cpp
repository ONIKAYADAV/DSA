#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int i,j,k,n=3,t=1,c=0;
  for(i=n;i>0;i--)
  {
    //t--;
    for(j=0;j<=n-i-1;j++)
      cout<<" ";
    cout<<t;
    for(k=0;k<n-c;k++)
      cout<<" ";
    if(t!=3)
      cout<<t;
    c=c+2;
    t++;
    cout<<endl;
  }
  c=0;
  //t=t-2;
  for(i=0;i<n-1;i++)
  {
    for(j=1;j<n-i-1;j++)
      cout<<" ";
    cout<<t;
    for(k=0;k<=i+c;k++)
      cout<<" ";
    if(t>1)
      cout<<t;
    t++;
    c++;
    cout<<endl;
  }
  return 0;
}