// put n items with given weight & value in a knapsack of capacity W to get the maximum total value in the knapsack.

// sample output :
// 250

// #include <iostream>
// using namespace std;

// int knapsack(int value[], int wt[], int n, int W)
// {
//     if (n == 0 || W == 0)
//     {
//         return 0;
//     }

//     if (wt[n - 1] > W)
//     {
//         return knapsack(value, wt, n - 1, W);
//     }
//     return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, W));
// }
// int main()
// {
//     int wt[] = {10, 20, 30};
//     int value[] = {100, 50, 150};
//     int W = 50;
//     cout << knapsack(value, wt, 3, W) << endl;
//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// int knapsack(int value[], int wt[], int n, int W)
// {
//     if (n == 0 || W == 0)
//     {
//         return 0;
//     }
//     if (wt[n - 1] > W)
//     {
//         return knapsack(value, wt, n - 1, W);
//     }
//     return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, W));
// }

// int main()
// {
//     int wt[] = {10, 20, 30};
//     int value[] = {100, 50, 150};
//     int W = 50;
//     cout << knapsack(value, wt, 3, W) << endl;
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int knapsack(int value[], int wt[], int n, int W)
// {
//     if (n == 0 || W == 0)
//     {
//         return 0;
//     }
//     if (wt[n - 1] > W)
//     {
//         return knapsack(value, wt, n - 1, W);
//     }
//     return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, W));
// }
// int main()
// {
//     int wt[] = {10, 20, 30};
//     int value[] = {100, 50, 150};
//     int W = 50;
//     cout << knapsack(value, wt, 3, W);
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int knapsack(int value[], int wt[], int n, int W)
// {
//     if (n == 0 || W == 0)
//     {
//         return 0;
//     }
//     if (wt[n - 1] > W)
//     {
//         return knapsack(value, wt, n - 1, W);
//     }
//     return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, W));
// }
// int main()
// {
//     int wt[] = {10, 20, 30};
//     int value[] = {100, 50, 150};
//     int W = 50;
//     cout << knapsack(value, wt, 3, W) << endl;
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// int knapsack(int value[], int wt[], int n, int W)
// {
//     if (n == 0 || W == 0)
//     {
//         return 0;
//     }
//     if (wt[n - 1] > W)
//     {
//         return knapsack(value, wt, n - 1, W);
//     }
//     return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, W));
// }

// int main()
// {
//     int wt[] = {10, 20, 30};
//     int value[] = {100, 50, 150};
//     int W = 50;
//     cout << knapsack(value, wt, 3, W) << endl;
//     return 0;
// }

// #5
// #include <iostream>
// using namespace std;

// int knapsack(int value[], int wt[], int n, int W)
// {
//     if (n == 0 || W == 0)
//     {
//         return 0;
//     }

//     return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, W));
// }

// int main()
// {
//     int wt[] = {10, 20, 30};
//     int value[] = {100, 50, 150};
//     int W = 50;
//     cout << knapsack(value, wt, 3, W) << endl;

//     return 0;
// }

// #6
#include <iostream>
using namespace std;

int knapsack(int value[], int wt[], int n, int W)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (wt[n - 1] > W)
    {
        return knapsack(value, wt, n - 1, W);
    }
    return max(knapsack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, W));
}

int main()
{
    int wt[] = {10, 20, 30};
    int value[] = {100, 50, 150};
    int W = 50;
    cout << knapsack(value, wt, 3, W) << endl;
    return 0;
}