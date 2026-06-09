#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  int n = nums.size();
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (nums[i] + nums[j] == target)
      {
        return {i, j};
      }
    }
  }
  return {};
}

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

  // int arr[5] = {10, 25, 5, 40, 18};

  // int largest = arr[0];

  // for (int i = 1; i < 5; i++)
  // {
  //   if (arr[i] > largest)
  //   {
  //     largest = arr[i];
  //   }
  // }

  // cout << "Largest = " << largest;

  // return 0;
}