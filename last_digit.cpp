#include<iostream>
using namespace std;
int main()
{	
	int N, TEN, H, HUN, T, THO, S;
	cout<<"Enter the value of a NUMBER: ";
	cin>>N;
	TEN=N%10;
	H=N%100;
	HUN=H/10;
	T=N%1000;
	THO=T/100;
	S=TEN+HUN+THO;
	cout<<"sum of last three digits of the number is: "<<S<<endl;
	return 0;
}
