#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int i,j,k,n=5,t=1,c=-1;
  for(i=0;i<n;i++)
  {
    for(j=n-1-i;j>0;j--)
      cout<<" ";
    cout<<t;
    for(k=0;k<i+c;k++)
      cout<<" ";
    if(t>1)
      cout<<t;
    t++;
    c++;
    cout<<endl;
  }
  c=0;
  t=t-2;
  for(i=n-1;i>0;i--)
  {
    //t--;
    for(j=0;j<=n-i-1;j++)
      cout<<" ";
    cout<<t;
    for(k=n-c;k>0;k--)
      cout<<" ";
    if(t>1)
      cout<<t;
    c=c+2;
    t--;
    cout<<endl;
  }
}
