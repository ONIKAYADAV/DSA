#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int i,j;
  for(i=0;i<5;i++)
  {
    for(j=0;j<=i;j++)
      cout<<"*";
    cout<<endl;
  }
  return 0;
}