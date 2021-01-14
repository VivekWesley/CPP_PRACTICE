// check given array is sorted or not using recursion.

// sample output:
// 1

// #1
// #include <iostream>
// using namespace std;

// bool sorted(int arr[], int n)
// {
//     if (n == 1)
//     {
//         return true;
//     }

//     bool restArray = sorted(arr + 1, n - 1);

//     return (arr[0] < arr[1] && restArray);
// }

// int main()
// {
//     int n;
//     int arr[] = {1, 2, 3, 4, 5};

//     cout << sorted(arr, 5) << endl;
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// bool sorted(int arr[], int n)
// {
//     if (n == 1)
//         return true;

//     bool restArray = sorted(arr + 1, n - 1);

//     return (arr[0] < arr[1] && restArray);
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     cout << sorted(arr, 5) << endl;

//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// bool sorted(int arr[], int n)
// {
//     if (n == 1)
//         return true;

//     bool restArray = sorted(arr + 1, n - 1);
//     return (arr[0] < arr[1] && restArray);
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     cout << sorted(arr, 5);
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// bool sorted(int arr[], int n)
// {
//     if (n == 1)
//         return true;

//     bool restArray = sorted(arr + 1, n - 1);
//     return (arr[0] < arr[1] && restArray);
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     cout << sorted(arr, 5) << endl;
//     return 0;
// }

// #5
#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

int main()
{
    int arr[] = {1, 2, 6, 4, 5};
    cout << sorted(arr, 5) << endl;
    return 0;
}