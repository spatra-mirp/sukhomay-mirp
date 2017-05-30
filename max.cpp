#include<iostream>
using namespace std;
int main()
{ int a, b, c, d;
  cout<<"Four integers:";
  cin>>a>>b>>c>>d;
  if(a>b&&a>c&&a>d)
  cout<<a;
  else if(b>a&&b>c&&b>d)
  cout<<b;
  else if(c>a&&c>b&&c>d)
  cout<<c;
  else if(d>a&&d>b&&d>c)
  cout<<d;
  if(a>b&&b>c&&c>d)
  cout<<b;
  else if(b>c&&c>a&&a>d)
  cout<<c;
  else if(c>d&&d>a&&a>b)
  cout<<d;
  else if(d>a&&a>b&&b>c)
  cout<<a;
  if(a<b&&b<c&&c<d)
  cout<<c;
  else if(b<c&&c<a&&d<a)
  cout<<d;
  else if(c<d&&d<a&&a<b)
  cout<<a;
  else if(d>a&&a>b&&b<c)
  cout<<b;
  return 0;
}
  
