#include<iostream>
using namespace std;
int main()
{ int mark, a, b, c;
  cout<<"enter the values of cutoff marks:";
  cin>>a>>b>>c;
  if(a>b&&b>c)
    cout<<"cutoff marks are valid.";
 cout<<" enter mark:";
  cin>>mark;
  if (mark>=80&&mark>=100)
    cout<<"grade A";
  else if (mark>=60)
     cout<<"grade B";
  else if (mark>=40)
     cout<<"grade C";
  else
     cout<<"not valid no. for grade";
   return 0;
}
