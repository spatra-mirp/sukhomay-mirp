#include<iostream>
using namespace std;
int main()
{ int n, a, b=0;
  cout<<"enter the number:";
  cin>>n;
  a = n;
  while(a!=0)
{ 
  b = b + a%10;
  a = a/10; }
cout<<"the sum of the digits of"<<n<<"is"<<b<<endl;
return 0;
}
