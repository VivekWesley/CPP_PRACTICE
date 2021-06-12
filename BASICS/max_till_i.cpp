// max till i.

// sample output:
// enter array size:
// 6
// enter array element:
// 0 -9 1 3 -4 5
// 0
// 0
// 1
// 3
// 3
// 5

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int mx = -199999;

//     cout << "enter array size: " << endl;
//     cin >> n;
//     int arr[n];

//     cout << "enter array element: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         mx = max(mx, arr[i]);
//         cout << mx << endl;
//     }

//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter array size:" << endl;
//     cin >> n;
//     int arr[n];

//     cout << "enter array elements: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int mx = -199999;

//     for (int i = 0; i < n; i++)
//     {
//         mx = max(mx, arr[i]);
//         cout << mx << endl;
//     }
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter array size:" << endl;
//     cin >> n;

//     int arr[n];
//     cout << "enter array elements: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int mx = -1999999;

//     for (int i = 0; i < n; i++)
//     {
//         mx = max(mx, arr[i]);
//         cout << mx << " ";
//     }
//     cout << endl;

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

//     int mx = -199999999;

//     for (int i = 0; i < n; i++)
//     {
//         mx = max(mx, arr[i]);
//         cout << mx << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #4
#include <iostream>
using namespace std;

void maxTilli(int arr[], int n)
{
    int mx = -1999999;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }
    cout << endl;
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

    maxTilli(arr, n);

    return 0;
}
