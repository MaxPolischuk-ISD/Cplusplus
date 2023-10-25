#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
  double x, y, y0, eps;
  std::cout<<"input x and eps";
  std::cin>>x>>eps;

  int k=1;
  y=1;
  do
  {
    y0=y;
    y=(2*y0+x/y0/y0)/3;
    k++;
  }while(fabs(y-y0)>eps && k<10000);  
  std::cout<<" y = "<<y;
  return 0;
  }