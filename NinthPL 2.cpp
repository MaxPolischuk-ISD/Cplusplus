#include <iostream>
using namespace std;

int main()
{
  const int size = 20;
  int arr[size];

  for (int i = 0; i < size; i++)
  {
    arr[i] = rand() % 99-50;
  }

  cout << "\nВхідний масив \n";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  int posmax = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > arr[posmax])
      posmax = i;
  }

  for (int j = 0; j < posmax; j++)
  {
    if (arr[j] < 0)
    {
      arr[j] = 0;
    }
  }

  cout << "\nВихідний масив \n";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
