// // selection sort

// // sample output:
// // enter array size:
// // 4
// // 4 8 1 2
// // 1 2 4 8

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

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cout << "enter array size" << endl;
//     cin >> n;
//     int arr[n];
//     cout << "enter array elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 int tem = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = tem;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
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

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }

//     cout << "sorted array: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #3
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter array size : " << endl;
    cin >> n;
    int arr[n];

    cout << "enter array size: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter array elements: " << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "sorted array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
