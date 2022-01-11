#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int i,j,n=6,t;
  for(i=0;i<n;i++)
  {
    t=n-1;
    for(j=0;j<=i;j++,t--)
      cout<<t;
    cout<<endl;
  }
  for(i=n-1;i>=0;i--)
  {
    t=n-1;
    for(j=0;j<=i;j++,t--)
      cout<<t;
    cout<<endl;
  }
  return 0;
}