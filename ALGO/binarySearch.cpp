// DATE: APR 18 2K21
// _____________________________________________________________
// binary search

// sample output:
// enter array size:
// 4
// enter array element:
// 11 22 33 44
// enter target element:
// 44
// element found at index: 3

// ______________________________________________________________
// #1
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int target)
// {
//     int L = 0;
//     int R = n - 1;
//     while (L <= R)
//     {
//         int mid = L + (R - L) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (target < arr[mid])
//         {
//             R = mid - 1;
//         }
//         else
//         {
//             L = mid + 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cout << "enter array size: " << endl;
//     cin >> n;
//     int arr[n];

//     cout << "enter array element: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int target;
//     cout << "enter target element: " << endl;
//     cin >> target;

//     cout << "element found at index: " << binarySearch(arr, n, target) << endl;

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int target)
// {
//     int L = 0;
//     int R = n - 1;

//     while (L <= R)
//     {
//         int mid = L + (R - L) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (target < arr[mid])
//         {
//             R = mid - 1;
//         }
//         else
//         {
//             L = mid + 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cout << "enter array size: " << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter array elements: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int target;
//     cout << "enter target element:" << endl;
//     cin >> target;
//     cout << "element fpund at index: " << binarySearch(arr, n, target) << endl;
//     return 0;
// }

// // #3
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int target)
// {
//     int L = 0;
//     int R = n - 1;

//     while (L <= R)
//     {
//         int mid = L + (R - L) / 2;
//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (target < arr[mid])
//         {
//             R = mid - 1;
//         }
//         else
//         {
//             L = mid + 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cout << "enter array size: " << endl;
//     cin >> n;

//     int arr[n];
//     cout << "enter array elements: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int target;
//     cout << "enter target element: " << endl;
//     cin >> target;

//     cout << target + " is found at INDEX: " << binarySearch(arr, n, target) << endl;

//     return 0;
// }

// #4
#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int target)
{
    int L = 0;
    int R = n - 1;

    while (L <= R)
    {
        int mid = L + (R - L) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target < arr[mid])
        {
            R = mid - 1;
        }
        else
        {
            L = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter array size: " << endl;
    cin >> n;

    int arr[n];
    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "enter target elements: " << endl;
    cin >> target;

    cout << target + "IS FOUND AT POSITION: " << binary_search(arr, n, target) << endl;

    return 0;
}
