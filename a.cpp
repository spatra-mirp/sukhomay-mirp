#include<iostream>
using namespace std;
int main()
{int n, number;
 int max=-1000, secmax=-1001;
 cout<<"enternumbers:";
  cin>>n;
  for(int i=0; i<n; i++){
      cout<<"enter next no."<<endl;
    cin>>number;
   if(number>secmax && number <=max){
   secmax=max;
}
  else if(number>max){
   secmax=max;
   max=number;
}
}
cout<<"max is:"<<max<<"and sec max is:"<<secmax<<endl;
return 0;
}
