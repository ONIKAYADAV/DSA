#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int i,j,k,n=5;
  for(i=0;i<n;i++)
  {
    for(k=n-1-i;k>0;k--)
      cout<<" ";
    for(j=0;j<=i;j++)
      cout<<"*";
    cout<<endl;
  }
  return 0;
}
