// DATE: APRIL 19 2K21
// ___________________________________________
// linear search

// sample output:
// enter array size:
// 4
// 54 78 35 45
// enter a search element :
// 35
// element found at index: 2

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int n, int target)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i;
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

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int target;
//     cout << "enter a search element :" << endl;
//     cin >> target;

//     cout << "element found at index: " << linearSearch(arr, n, target);
//     return 0;
// }

// #1
#include <iostream>
using namespace std;

int linearSerach(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
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
    cout << "enter target element: " << endl;
    cin >> target;

    cout << target + "IS FOUND AT POSITION: " << linearSerach(arr, n, target) << endl;
    return 0;
}