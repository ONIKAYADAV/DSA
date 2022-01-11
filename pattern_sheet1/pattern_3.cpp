#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int i,j,k,n=5;
  for(i=0;i<n;i++)
  {
    for(k=0;k<i;k++)
      cout<<" ";
    for(j=n-i;j>0;j--)
      cout<<"*";
    cout<<endl;
  }
  return 0;
}
