#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int i,j,k,n=5,c=0,t;
  for(i=0,t=0;i<n;i++,t=t+2)
  {
    //a=1+t;
    for(k=n-1-i;k>0;k--)
      cout<<" ";
    for(j=1+t;j>0;j--)
    {
      cout<<j;
      //a=a-1;
    }
    cout<<endl;
  }
  return 0;
}
