#include<iostream>
#include<stdio.h>
using namespace std;
int pt(int n,int k);
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<pt(i,j)<<" ";
    }
    cout<<endl;
  }
  return 0;
}
int pt(int n,int k)
{
  int v=1;
  if(k>n-k)
    k=n-k;
  for(int i=0;i<k;i++)
  {
    v*=(n-i);
    v/=(i+1);
  }
  return v;
}