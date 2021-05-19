// sum of all subarrays

// sample output:
// enter array size:
// 3
// enter array elements:
// 1 2 2
// 1
// 3
// 5
// 2
// 4
// 2

// #include <iostream>
// using namespace std;

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

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             cout << sum << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter array size: " << endl;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             cout << sum << endl;
//         }
//     }

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;
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

//     for (int i = 0; i < n; i++)
//     {
//         int currentSum = 0;
//         for (int j = i; j < n; j++)
//         {
//             currentSum = currentSum + arr[j];
//             cout << currentSum << endl;
//         }
//     }
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;
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

//     for (int i = 0; i < n; i++)
//     {
//         int currentSum = 0;
//         for (int j = i; j < n; j++)
//         {
//             currentSum = currentSum + arr[j];
//             cout << currentSum << endl;
//         }
//     }
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

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

//     for (int i = 0; i < n; i++)
//     {
//         int currentSum = 0;
//         for (int j = i; j < n; j++)
//         {
//             currentSum = currentSum + arr[j];
//             cout << currentSum << endl;
//         }
//     }
//     return 0;
// }

// #5
// #include <iostream>
// using namespace std;

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

//     for (int i = 0; i < n; i++)
//     {
//         int currentSum = 0;
//         for (int j = i; j < n; j++)
//         {
//             currentSum = currentSum + arr[j];
//             cout << currentSum << endl;
//         }
//     }
//     return 0;
// }

// #6
#include <iostream>
using namespace std;

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

    cout << "sum of each subarray: " << endl;

    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            cout << currSum << " ";
        }
    }
    cout << endl;

    return 0;
}