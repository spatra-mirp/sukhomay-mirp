#include <iostream>
using namespace std;
int main()
{ int x1, x2, x3, y1, y2, y3, d1, d2, d3;
  cout<<"enter the coordinates x1 y1 x2 y2 x3 y3:";
  cin>> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  d1=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  d2=((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
  d3=((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
  if (d1==d2&&d2==d3)
     cout<<"equilateral triangle";
  else if (d1==d2&&d2!=d3)
           cout<<"isosceles triangle";
  else if (d1!=d2&&d2==d3)
           cout<<"isosceles triangle";
  else if (d1!=d2&&d2!=d3)
    cout<<"scalene triangle";
  return 0;
}
