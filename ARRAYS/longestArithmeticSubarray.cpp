// DATE: MAR 21 2K21
// PS: longest arithmetic subarray

// sample output:
// enter array size:
// 7
// enter array elements:
// 10 7 4 6 8 10 11
// 4
// _______________________________________________________________________

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

//     int ans = 2;
//     int pd = arr[1] - arr[0];
//     int j = 2;
//     int current = 2;
//     while (j < n)
//     {
//         if (pd == arr[j] - arr[j - 1])
//         {
//             current++;
//         }
//         else
//         {
//             pd = arr[j] - arr[j - 1];
//             current = 2;
//         }
//         ans = max(ans, current);
//         j++;
//     }
//     cout << ans << endl;

//     return 0;
// }

// #1
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

//     int current = 2;
//     int ans = 2;
//     int pd = arr[1] - arr[0];
//     int j = 2;

//     while (j < n)
//     {
//         if (pd == arr[j] - arr[j - 1])
//         {
//             current++;
//         }
//         else
//         {
//             pd = arr[j] - arr[j - 1];
//             current = 2;
//         }
//         ans = max(ans, current);
//         j++;
//     }

//     cout << ans << endl;
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

//     int ans = 2;
//     int pd = arr[1] - arr[0];
//     int current = 2;
//     int j = 2;

//     while (j < n)
//     {
//         if (pd == arr[j] - arr[j - 1])
//         {
//             current++;
//         }
//         else
//         {
//             pd = arr[j] - arr[j - 1];
//             current = 2;
//         }
//         ans = max(current, ans);
//         j++;
//     }
//     cout << ans << endl;
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

//     int ans = 2;
//     int pd = arr[1] - arr[0];
//     int current = 2;
//     int j = 2;

//     while (j < n)
//     {
//         if (pd == arr[j] - arr[j - 1])
//         {
//             current++;
//         }
//         else
//         {
//             pd = arr[j] - arr[j - 1];
//             current = 2;
//         }
//         ans = max(ans, current);
//         j++;
//     }
//     cout << ans << endl;
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

//     int ans = 2;
//     int current = 2;
//     int i = 2;
//     int pd = arr[1] - arr[0];

//     while (i < n)
//     {
//         if (pd == arr[i] - arr[i - 1])
//         {
//             current++;
//         }
//         else
//         {
//             pd = arr[i] - arr[i - 1];
//             current = 2;
//         }

//         ans = max(ans, current);
//         i++;
//     }
//     cout << ans << endl;
//     return 0;
// }

// #5
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

    int ans = 2;
    int current = 2;
    int i = 2;
    int pd = arr[1] - arr[0];

    while (i < n)
    {
        if (pd == arr[i] - arr[i - 1])
        {
            current++;
        }
        else
        {
            pd = arr[i] - arr[i - 1];
            current = 2;
        }
        ans = max(ans, current);
        i++;
    }
    cout << ans << endl;
    return 0;
}