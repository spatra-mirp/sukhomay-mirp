#include<iostream>
#include<cmath>
using namespace std;
int main()
{ float a, b, c, x1, x2, determinant, realpart, imaginarypart;
  cout<<"enter coefficients a b c:";
  cin>>a>>b>>c;
  determinant= b*b-4*a*c;
  if (determinant>0)
{ x1=(-b+sqrt(determinant))/(2*a);
  x2=(-b-sqrt(determinant))/(2*a);
  cout<<"Roots are real and different."<<endl;
  cout<<"x1="<<x1<<endl;
  cout << "x2 = " << x2 << endl;
}
  else if (determinant==0)

{ cout<<"Roots are real and same."<<endl;
  x1=(-b+sqrt(determinant))/(2*a);
  cout<<"x1=x2="<<x1<<endl;
}
  else
{ realpart=-b/(2*a);
  imaginarypart=sqrt(-determinant)/(2*a);
  cout<<"Roots are comlex and different."<<endl;
  cout<<"x1="<<realpart<<"+"<<imaginarypart<<"i"<<endl;
  cout<<"x2="<<realpart<<"-"<<imaginarypart<<"i"<<endl;
}
  return 0;
}
