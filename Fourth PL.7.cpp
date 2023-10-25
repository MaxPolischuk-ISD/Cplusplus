#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
 

int main()
{
  
  cout<<fixed<<setprecision(1)<<2.3<<endl;  
  cout<<fixed<<setprecision(2)<<2.3<<endl;
  
  cout.precision(6);
  cout<<2.123456<<endl;
  cout<<fixed<<setprecision(2)<<2.123456<<endl;
  cout<<fixed<<setprecision(0)<<2.123456<<endl;
  
  float a=2.3;
  float b=2.3;
  float c=2.123456;
  float d=2.123456;
  float e=2.123456;

  cout<<fixed<<setprecision(1)<<a<<endl;  
  cout<<fixed<<setprecision(2)<<b<<endl;
  
  cout.precision(6);
  cout<<c<<endl;
  cout<<fixed<<setprecision(2)<<d<<endl;
  cout<<fixed<<setprecision(0)<<e<<endl;

  return 0;
  }  
