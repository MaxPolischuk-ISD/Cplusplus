#include <iostream>
#include <string>
#include <math.h>
int main()
{
 //First example.
 int a =4;
 double b = 3.141;
 
 double result1= 0;
 double result2;
 result1 = (0.75 * exp(1-b)+0.31*exp(1-a))/(0.731 + pow(sin(b/a*3.1416),2));
 std::cout <<  " Result 1 is: " << result1;

 //Second example.
 int x=10;
 double y=0.5;
 result2=0;
 result2 = (0.314*exp(x)-0.512*exp(y))/(sin(y/3*3.14))*log(x);
 std::cout <<  " Result 2 is: " << result2;
}