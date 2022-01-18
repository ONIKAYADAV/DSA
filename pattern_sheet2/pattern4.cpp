#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<i;j++)
      cout<<" ";
    for(int k=0;k<=i;k++)
      cout<<"*";
    cout<<endl;
  }
  n--;
  while(n>=0)
  {
    for(int j=0;j<n-1;j++)
      cout<<" ";
    for(int k=0;k<n;k++)
      cout<<"*";
    n--;
    cout<<endl;
  }
  return 0;
}