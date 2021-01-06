// selection sort
// DATE: JAN 06 2K21
// ____________________________________________

// sample output:
// enter array size:
// 10
// enter array elements:
// 1 8 2 4 1 5 8 6 5 7
// sorted array:
// 1 1 2 4 5 5 6 7 8 8

#include <iostream>
using namespace std;

int selectionSort(int arr[], int n)
{
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
    return arr[n];
}

int main()
{
    int n;
    cout << "enter array size:" << endl;
    cin >> n;

    int arr[n];

    cout << "enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}