// bubble sort algorithm
// DATE: JAN 06 2K21
// _________________________________________________

// sample output:
// enter array size:
// 10
// enter array elements:
// 9 4 1 2 7 5 9 8 3 5
// sorted array:
// 1 2 3 4 5 5 7 8 9 9

// #include <iostream>
// using namespace std;

// int bubbleSort(int arr[], int n)
// {
//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }
//     return arr[n];
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

//     bubbleSort(arr, n);

//     cout << "sorted array: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// int bubbleSort(int arr[], int n)
// {
//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
//             }
//         }
//         counter++;
//     }
//     return arr[n];
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

//     bubbleSort(arr, n);

//     cout << "sorted array: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #2
#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n)
{
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    return arr[n];
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

    bubbleSort(arr, n);

    cout << "sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}