#include<iostream>
using namespace std;
int main()
{ int n, x, sum=0;
  cout<<"enter n input:";
  cin>>n;
  for(int i=0; i<n; i++)
  {
      cout<<"enter next number:"<<endl;
      cin>>x;
      sum+=x;
  }
 x = sum/n;
 cout<<"average"<<x<<endl; 
 return 0;
}
