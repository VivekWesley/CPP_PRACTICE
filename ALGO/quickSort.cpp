// DATE: JUN 17 2K21
// ___________________________________________________________
// PS: quick sort algorithm
//
// sample output:
//
// enter array elements:
// 5
// enter array elements:
// 5 4 3 2 1
// sorted array:
// 1 2 3 4 5
// ___________________________________________________________

// #include <iostream>
// using namespace std;

// void swap(int arr[], int i, int j)
// {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

// int partition(int arr[], int l, int r)
// {
//     int pivot = arr[r];
//     int i = l - 1;

//     for (int j = l; j < r; j++)
//     {
//         if (arr[j] < pivot)
//         {
//             i++;
//             swap(arr, i, j);
//         }
//     }
//     swap(arr, i + 1, r);
//     return i + 1;
// }

// void quickSort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int pi = partition(arr, l, r);
//         quickSort(arr, l, pi - 1);
//         quickSort(arr, pi + 1, r);
//     }
// }

// int main()
// {
//     int n;
//     cout << "enter array elements: " << endl;
//     cin >> n;

//     int arr[n];
//     cout << "enter array elements: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     quickSort(arr, 0, n - 1);
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

// void swap(int arr[], int i, int j)
// {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

// int partition(int arr[], int l, int r)
// {
//     int pivot = arr[r];
//     int i = l - 1;

//     for (int j = l; j < r; j++)
//     {
//         if (arr[j] < pivot)
//         {
//             i++;
//             swap(arr, i, j);
//         }
//     }
//     swap(arr, i + 1, r);
//     return i + 1;
// }

// void quickSort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int pi = partition(arr, l, r);
//         quickSort(arr, l, pi - 1);
//         quickSort(arr, pi + 1, r);
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

//     quickSort(arr, 0, n - 1);

//     cout << "soerted array: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// void swap(int arr[], int i, int j)
// {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

// int partition(int arr[], int l, int r)
// {
//     int pivot = arr[r];
//     int i = l - 1;

//     for (int j = l; j < r; j++)
//     {
//         if (arr[j] < pivot)
//         {
//             i++;
//             swap(arr, i, j);
//         }
//     }
//     swap(arr, i + 1, r);
//     return i + 1;
// }

// void quickSort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int pi = partition(arr, l, r);
//         quickSort(arr, l, pi - 1);
//         quickSort(arr, pi + 1, r);
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
//         cin >> arr[i];

//     quickSort(arr, 0, n - 1);

//     cout << "SORTED array: " << endl;
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// void swap(int arr[], int i, int j)
// {
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
// }

// int partition(int arr[], int l, int r)
// {
//     int i = l - 1;
//     int pivot = arr[r];

//     for (int j = l; j < r; j++)
//     {
//         if (arr[j] < pivot)
//         {
//             i++;
//             swap(arr, i, j);
//         }
//     }
//     swap(arr, i + 1, r);
//     return i + 1;
// }

// void quickSort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int pi = partition(arr, l, r);
//         quickSort(arr, l, pi - 1);
//         quickSort(arr, pi + 1, r);
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

//     quickSort(arr, 0, n - 1);

//     cout << "sorted array is: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
