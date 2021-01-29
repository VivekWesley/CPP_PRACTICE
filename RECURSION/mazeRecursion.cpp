// DATE: JAN 29 2K21
// ___________________________________________________________________

// count the number of paths possible in a maze.

// sample output:
// 6

// #include <iostream>
// using namespace std;

// int countPathMaze(int n, int i, int j)
// {
//     if (i == n - 1 && j == n - 1)
//     {
//         return 1;
//     }

//     if (i >= n || j >= n)
//     {
//         return 0;
//     }

//     return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
// }

// int main()
// {
//     cout << countPathMaze(3, 0, 0);
//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// int countPathMaze(int n, int i, int j)
// {
//     if (i == n - 1 && j == n - 1)
//     {
//         return 1;
//     }

//     if (i >= n || j >= n)
//     {
//         return 0;
//     }
//     return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
// }

// int main()
// {
//     cout << countPathMaze(2, 0, 0);
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int countPathMaze(int n, int i, int j)
// {
//     if (i == n - 1 && j == n - 1)
//     {
//         return 1;
//     }
//     if (i >= n || j >= n)
//     {
//         return 0;
//     }

//     return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
// }

// int main()
// {
//     cout << countPathMaze(3, 0, 0);
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int countPathMaze(int n, int i, int j)
// {
//     if (i == n - 1 && j == n - 1)
//     {
//         return 1;
//     }
//     if (i >= n || j >= n)
//     {
//         return 0;
//     }

//     return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
// }

// int main()
// {
//     cout << countPathMaze(3, 0, 0);
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// int countPathMaze(int n, int i, int j)
// {
//     if (i == n - 1 && j == n - 1)
//     {
//         return 1;
//     }
//     if (i >= n || j >= n)
//     {
//         return 0;
//     }

//     return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
// }
// int main()
// {
//     cout << countPathMaze(4, 0, 0);
//     return 0;
// }

// #5
#include <iostream>
using namespace std;

int countPathMaze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }

    return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
}
int main()
{
    cout << countPathMaze(3, 0, 0);
    return 0;
}