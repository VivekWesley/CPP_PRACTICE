//  DATE: MAR 14 2K21

// Binary search using recursion.
// sample output: ["Not found error int the code"]
// ________________________________________________________________________________________

// #include <iostream>
// using namespace std;

// int binary_search_helper(int arr[], int L, int R, int target)
// {
//     if (L > R)
//     {
//         cout << "Not found" << endl;
//     }

//     int mid = L + (R - L) / 2;

//     if (arr[mid] == target)
//     {
//         return mid;
//     }

//     if (target < arr[mid])
//     {
//         return binary_search_helper(arr, L, mid - 1, target);
//     }
//     else
//     {
//         return binary_search_helper(arr, mid + 1, R, target);
//     }
// };

// int binary_search(int arr[], int target)
// {
//     int R = sizeof(arr[10]) - 1;
//     binary_search_helper(arr, 0, R, target);
//     return 0;
// };

// int main()
// {
//     int arr[] = {0, 1, 3, 4, 5, 6, 7, 8, 9};
//     int target = 9;
//     cout << binary_search(arr, target);

//     return 0;
// }

#include <iostream>
using namespace std;

int binary_search_helper(int arr[], int L, int R, int target)
{
    if (L > R)
    {
        cout << "Not found" << endl;
    }

    int mid = L + (R - L) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }

    if (target < arr[mid])
    {
        return binary_search_helper(arr, L, mid - 1, target);
    }
    else
    {
        return binary_search_helper(arr, mid + 1, R, target);
    }
};

int binary_search(int arr[], int target)
{
    int R = sizeof(arr[10]) - 1;
    binary_search_helper(arr, 0, R, target);
    return 0;
};

int main()
{
    int arr[] = {0, 1, 3, 4, 5, 6, 7, 8, 9};
    int target = 3;
    cout << binary_search(arr, target);

    return 0;
}
