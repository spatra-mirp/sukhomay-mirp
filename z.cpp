#include<iostream>
using namespace std;
int main()
{
 int x[5]={1,2,3,4,5};
 for(int i=0;i<5;i++)
 cout<<x[i]<<" ";
 
char name[50]="my_name";

cout<<"enter name";
cin>>name;
for(int i=0;name[i]!='\0';i++)
cout<<name[i]<<" "<<i<<endl;
return 0;
}
