// find prime smallest prime factor of n 'spf[n]' using sieve principle

// sample output:
// enter a number:
// 42
// 2 3 7

// #1
// #include <iostream>
// using namespace std;

// void primeFactor(int n)
// {
//     int spf[100] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         spf[i] = i;
//     }

//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 if (spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }

//     while (n != 1)
//     {
//         cout << spf[n] << " ";
//         n = n / spf[n];
//     }
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     primeFactor(n);

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// void prrimeFactor(int n)
// {
//     int spf[100] = {0};

//     for (int i = 2; i <= n; i++)
//     {
//         spf[i] = i;
//     }

//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 if (spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }

//     while (n != 1)
//     {
//         cout << spf[n] << " ";
//         n = n / spf[n];
//     }
// }

// int main()
// {
//     int n;

//     cout << "enter a number: " << endl;
//     cin >> n;

//     prrimeFactor(n);

//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// void primeFactor(int n)
// {
//     int spf[100] = {0};

//     for (int i = 2; i <= n; i++)
//     {
//         spf[i] = i;
//     }

//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 if (spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }

//     while (n != 1)
//     {
//         cout << spf[n] << " ";
//         n = n / spf[n];
//     }
// }

// int main()
// {
//     int n;

//     cout << "enter a number: " << endl;
//     cin >> n;

//     primeFactor(n);

//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// void primeFactor(int n)
// {
//     int spf[100] = {0};

//     for (int i = 2; i <= n; i++)
//     {
//         spf[i] = i;
//     }

//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i] == i)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 if (spf[j] == j)
//                 {
//                     spf[j] = i;
//                 }
//             }
//         }
//     }

//     while (n != 1)
//     {
//         cout << n << " ";
//         n = n / spf[n];
//     }
// }

// int main()
// {
//     int n;

//     cout << "enter a number: " << endl;
//     cin >> n;

//     primeFactor(n);

//     return 0;
// }

// #5
#include <iostream>
using namespace std;

void primeFactor(int n)
{
    int spf[100] = {0};

    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }

    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}

int main()
{
    int n;

    cout << "enter a number: " << endl;
    cin >> n;

    primeFactor(n);

    return 0;
}