#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int i,j,k,n=5,c=2;
  char t='E';
  for(i=n-1;i>=0;i--)
  {
    //t--;
    for(j=0;j<=n-i-1;j++)
      cout<<" ";
    cout<<t;
    for(k=0;k<n+c;k++)
      cout<<" ";
    if(t!='A')
      cout<<t;
    c=c-2;
    t--;
    cout<<endl;
  }
  return 0;
}
