#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float a, b, c, x, Y;
  cout<<"input a,b,c,x ";
  cin>>a>>b>>c>>x;
  if (b<5)  
  {  
    Y=pow(4-x,a*b);  
  }
  else  
  {  
    Y=0.25+b*c;  
  } 
  
  cout<<"Y= "<<Y<<"\n";  
  
}


