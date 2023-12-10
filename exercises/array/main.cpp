#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    // 1. Find the maximum element in an array
    // int n, arr[100];
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int max1, max2;
    // if (arr[0] > arr[1])
    // {
    //     max1 = arr[0];
    //     max2 = arr[1];
    // }
    // else
    // {
    //     max1 = arr[1];
    //     max2 = arr[0];
    // }
    // for (int i = 2; i < n; i++)
    // {
    //     if (arr[i] > max1)
    //     {
    //         max2 = max1;
    //         max1 = arr[i];
    //     }
    //     else if (arr[i] > max2)
    //     {
    //         max2 = arr[i];
    //     }
    // }
    // cout << max1 << " " << max2 << endl;

    // 2. Find pairs with maximum sum in an array
    // int maxSum = arr[0] + arr[1];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j < n; j++)
    //     {
    //         int sum = arr[i] + arr[j];
    //         if (sum > maxSum)
    //         {
    //             maxSum = sum;
    //         }
    //     }
    // }

    // 3. Reverse an array in place
    // int n, arr[100];
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n / 2; i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[n - 1 - i];
    //     arr[n - 1 - i] = temp;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // 4.Find most frequent element in an array
    // int n, arr[100];
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int maxCount = -1, maxElement = -1;
    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         count += (arr[i] == arr[j]);
    //     }
    //     if (maxCount == -1 || count > maxCount)
    //     {
    //         maxCount = count;
    //         maxElement = arr[i];
    //     }
    // }
    // cout << "Most frequent element is " << maxElement << " with " << maxCount << " occurrences" << endl;
    // int n, arr[100];
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int freq[150 + 1] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     freq[arr[i]]++;
    // }
    // int maxPos = -1;
    // for (int i = 0; i < 151; i++)
    // {
    //     if (maxPos == -1 || freq[i] > freq[maxPos])
    //         maxPos = i;
    // }
    // cout << maxPos << " " << freq[maxPos] << endl;

    // 5. Is increasing array
    // int n, arr[100];
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // bool isIncreasing = true;
    // for (int i = 1; i < n; i++)
    // {
    //     if (arr[i] < arr[i - 1])
    //     {
    //         isIncreasing = false;
    //         break;
    //     }
    // }
    // cout << (isIncreasing ? "YES" : "NO") << endl;

    // 6. Replace MinMax
    // int n, arr[100];
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // 7. Unique numbers of ordered list
    // int n, arr[100];
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << arr[0] << " ";
    // for (int i = 1; i < n; i++)
    // {
    //     assert(arr[i] >= arr[i - 1]);
    //     if (arr[i] != arr[i - 1])
    //         cout << arr[i] << " ";
    // }

    // 8. Is Palindrome
    // int n, arr[100];
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // bool isPalindrome = true;
    // for (int i = 0; i < n / 2; i++)
    // {
    //     if (arr[i] != arr[n - 1 - i])
    //     {
    //         isPalindrome = false;
    //         break;
    //     }
    // }
    // cout << (isPalindrome ? "YES" : "NO") << endl;

    // 9. Smallest pair
    // int n, arr[100];
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int min;
    // bool firstTime = true;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //         int tmp = arr[i] + arr[j] + j - i;
    //     {
    //         if (firstTime || tmp < min)
    //         {
    //             min = tmp;
    //             firstTime = false;
    //         }
    //     }
    // }
    // cout << min << endl;

    return 0;
}