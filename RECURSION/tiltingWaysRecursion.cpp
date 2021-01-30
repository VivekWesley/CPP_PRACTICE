// count the number of ways tile the given board using given tiles
// given "2*n" board & tiles of "2*1"
// sample output:
// 3

// #include <iostream>
// using namespace std;

// int tilingWays(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     if (n == 0)
//     {
//         return 0;
//     }
//     return tilingWays(n - 1) + tilingWays(n - 2);
// }

// int main()
// {
//     cout << tilingWays(4) << endl;
//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// int tilingWays(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }

//     if (n == 0)
//     {
//         return 0;
//     }
//     return tilingWays(n - 1) + tilingWays(n - 2);
// }
// int main()
// {
//     cout << tilingWays(3);
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int tilingWays(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     if (n == 0)
//     {
//         return 0;
//     }
//     return tilingWays(n - 1) + tilingWays(n - 2);
// }

// int main()
// {
//     cout << tilingWays(4) << endl;
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int tilingWays(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     if (n == 0)
//     {
//         return 0;
//     }

//     return tilingWays(n - 1) + tilingWays(n - 2);
// }

// int main()
// {
//     cout << tilingWays(3) << endl;
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// int tilingWays(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     if (n == 0)
//     {
//         return 0;
//     }
//     return tilingWays(n - 1) + tilingWays(n - 2);
// }
// int main()
// {
//     cout << tilingWays(4) << endl;
//     return 0;
// }

// #5
#include <iostream>
using namespace std;

int tilingWays(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }

    return tilingWays(n - 1) + tilingWays(n - 2);
}

int main()
{
    cout << tilingWays(3) << endl;
    return 0;
}
