#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int i,j,k,n=6,c=0;
  for(i=0;i<n;i++)
  {
    for(k=n-2-i;k>0;k--)
      cout<<" ";
    for(j=0;j<=i;j++)
    {
      if(i==n-1)
        c++;
      if(c!=1)
      {
        cout<<" ";
      }
      
      cout<<"*";
    }
    cout<<endl;
  }
  for(i=n-1;i>0;i--)
  {
    for(k=1;k<=n-i-1;k++)
      cout<<" ";
    for(j=0;j<i;j++)
    {
      //if(i==n-1)
        //c++;
      //if(c!=1)
      //{
        cout<<" ";
      //}
      
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}