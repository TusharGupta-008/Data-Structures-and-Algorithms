#include <iostream>
using namespace std;

int main()
{
  // int temp[5] = {40, 50, 60, 70, 80};

  // for (int i = 0; i < 5; i++)
  // {
  //   cout << "The tempratures are : " << temp[i];
  //   cout << endl;
  // }
  // int arr[5] = {1, 2, 3, 4, 5};
  // int sum = 0;

  // for (int i = 0; i < 5; i++)
  // {
  //   sum += arr[i];
  // }

  // cout << "Sum = " << sum;

  int arr[5] = {10, 25, 5, 40, 18};

  int largest = arr[0];

  for (int i = 1; i < 5; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }

  cout << "Largest = " << largest;

  return 0;
}