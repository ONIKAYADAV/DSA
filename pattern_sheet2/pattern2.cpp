#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int n,sum;
  cin>>n;
  int a=0,b=1;
  cout<<b<<endl;
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      sum=a+b;
      cout<<sum<<" ";
      a=b;
      b=sum;
    }
    cout<<endl;
  }
  return 0;
}