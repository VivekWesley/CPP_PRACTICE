// DATE: MAY 25 2K21
// [Q]. MERGE SORT ALGO
// _________________________________________________________________
// Sample output:

// enter array size:
// 10
// enter array elements:
// 1 2 4 3 6 8 5 0 8 3
// sorted array:
// 0 1 2 3 3 4 5 6 8 8
// _________________________________________________________________

// #include <iostream>
// using namespace std;

// void merge(int arr[], int l, int mid, int r)
// {
//     int n1 = mid - l + 1;
//     int n2 = r - mid;

//     int a[n1];
//     int b[n2];

//     for (int i = 0; i < n1; i++)
//     {
//         a[i] = arr[l + i];
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         b[i] = arr[mid + 1 + i];
//     }

//     int i = 0;
//     int j = 0;
//     int k = l;

//     while (i < n1 && j < n2)
//     {
//         if (a[i] < b[j])
//         {
//             arr[k] = a[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             arr[k] = b[j];
//             k++;
//             j++;
//         }
//     }

//     while (i < n1)
//     {
//         arr[k] = a[i];
//         k++;
//         i++;
//     }
//     while (j < n2)
//     {
//         arr[k] = b[j];
//         k++;
//         j++;
//     }
// }

// void mergeSort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int mid = (l + r) / 2;

//         mergeSort(arr, l, mid);
//         mergeSort(arr, mid + 1, r);

//         merge(arr, l, mid, r);
//     }
// }

// int main()
// {
//     int arr[] = {6, 3, 9, 5, 2, 8, 7, 1};
//     mergeSort(arr, 0, 7);

//     for (int i = 0; i < 8; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// void merge(int arr[], int l, int mid, int r)
// {
//     int n1 = mid - l + 1;
//     int n2 = r - mid;

//     int a[n1];
//     int b[n2];

//     for (int i = 0; i < n1; i++)
//     {
//         a[i] = arr[l + i];
//     }

//     for (int i = 0; i < n2; i++)
//     {
//         b[i] = arr[mid + 1 + i];
//     }

//     int i = 0;
//     int j = 0;
//     int k = l;
//     while (i < n1 && j < n2)
//     {
//         if (a[i] < b[j])
//         {
//             arr[k] = a[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             arr[k] = b[j];
//             j++;
//             k++;
//         }
//     }

//     while (i < n1)
//     {
//         arr[k] = a[i];
//         i++;
//         k++;
//     }

//     while (j < n2)
//     {
//         arr[k] = b[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int mid = l + (r - l) / 2;

//         mergeSort(arr, l, mid);
//         mergeSort(arr, mid + 1, r);

//         merge(arr, l, mid, r);
//     }
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

//     mergeSort(arr, 0, n - 1);

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

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 & j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    int n;
    cout << "enter array size: " << endl;
    cin >> n;
    cout << "enter array elements: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);
    cout << "sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}