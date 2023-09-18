#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int
main ()
{
  int x = 0;
  int a = 0;
  int b = 0;
  int c = 0;
  double results = 0;

  cout << " Enter a value: ";
  cin >> a;
  cout << " Enter b value: ";
  cin >> b;
  cout << " Enter c value: ";
  cin >> c;
  cout << " Enter x value: ";
  cin >> x;

  if (b < 5)
    {
      results = pow ((4 - x), a * b);
    }
  if (b >= c)
    {
      results = 0.25 + b * c;
    }
  cout << results;

  int y = 0;
  x = 0;

  if (x >= 0 && x <= 1 && y <= 0 && y >= -1 || x <= 0 && x >= -1 && y >= 0
      && y <= 1)
    {
      cout << "WinWin!";
    }
  else
    {
      cout << "LoseLose";

    }
}
