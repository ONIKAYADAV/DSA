#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
float seri(int n);
int main()
{
  int n;
  float sum;
  cin>>n;
  sum=seri(n);
  cout<<sum;
  return 0;
}
float seri(int n)
{
  float s=0;
  //int i=1;
  if(n==1)
    return 1;
  //else
    //s+=(float)1/(i*i);
  return (1/pow(n,n)+seri(n-1));

}