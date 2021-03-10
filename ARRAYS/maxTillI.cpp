// DATE: MAR 10 2K21
// [Q]. given an array of size n for every i from 0 - (n-1) print max element til i
// _____________________________________________________________________________________
// sample output:
// enter array size:
// 6
// enter array elements:
// 1 0 5 4 6 8
// max till ith element:
// 1 1 5 5 6 8

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter array size: " << endl;
    cin >> n;
    int mx = -1999999;
    int arr[n];
    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "max till ith element: " << endl;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }
    return 0;
}