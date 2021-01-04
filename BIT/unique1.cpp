// DATE: JAN 04 2021
// _____________________________________________________________

// find a unique number using bits

// sample output:
// 4

// #1
// #include <iostream>
// using namespace std;

// int unique(int arr[], int n)
// {
//     int xorSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorSum = xorSum ^ arr[i];
//     }
//     return xorSum;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 1, 2, 3};
//     cout << unique(arr, 7) << endl;

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int unique(int arr[], int n)
// {
//     int xorSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorSum = xorSum ^ arr[i];
//     }
//     return xorSum;
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

//     cout << "unique number: " << unique(arr, n) << endl;

//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int unique(int arr[], int n)
// {
//     int xorSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorSum = xorSum ^ arr[i];
//     }
//     return xorSum;
// }

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

//     cout << unique(arr, n) << " is unique" <<endl;

//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// int unique(int arr[], int n)
// {
//     int xorSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorSum = xorSum ^ arr[i];
//     }
//     return xorSum;
// }

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

//     cout << unique(arr, n) << endl;

//     return 0;
// }

// #5
#include <iostream>
using namespace std;

int unique(int arr[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    return xorSum;
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

    cout << "unique number: " << unique(arr, n) << endl;

    return 0;
}

// sample output:

// enter array size:
// 7
// enter array elements:
// 1 2 3 4 1 2 3
// unique number: 4