// bubble sort2.

// sample output:
// enter array size:
// 4
// enter array elements
// 8 4 1 9
// 1 4 8 9

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;

//     cout << "enter array size: " << endl;
//     cin >> n;
//     int arr[n];

//     cout << "enter array elements" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
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

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #1
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n value: " << endl;
    cin >> n;
    int arr[n];

    cout << "enter array elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
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

    cout << "sorted array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}