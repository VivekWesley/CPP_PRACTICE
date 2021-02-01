// DATE: FEB 1 2K21
// _________________________________________________________________________________

// find the number of ways in which n friends can remain single orcan be paired up.

// sample output:
// 10

// #include <iostream>
// using namespace std;

// int friendsPairing(int n)
// {
//     if (n == 0 || n == 1 || n == 2)
//     {
//         return n;
//     }

//     return friendsPairing(n - 1) + friendsPairing(n - 2) * (n - 1);
// }

// int main()
// {
//     cout << friendsPairing(4) << endl;
//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// int friendsPairing(int n)
// {
//     if (n == 0 || n == 1 || n == 2)
//     {
//         return n;
//     }

//     return friendsPairing(n - 1) + friendsPairing(n - 2) * (n - 1);
// }
// int main()
// {
//     cout << friendsPairing(4) << endl;
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// int friendsPairing(int n)
// {
//     if (n == 0 || n == 1 || n == 2)
//     {
//         return n;
//     }
//     return friendsPairing(n - 1) + friendsPairing(n - 2) * (n - 1);
// }

// int main()
// {
//     cout << friendsPairing(4) << endl;
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// int friendsPairing(int n)
// {
//     if (n == 0 || n == 1 || n == 2)
//     {
//         return n;
//     }
//     return friendsPairing(n - 1) + friendsPairing(n - 2) * (n - 1);
// }

// int main()
// {
//     cout << friendsPairing(4) << endl;
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// int friendsPairing(int n)
// {
//     if (n == 0 || n == 1 || n == 2)
//     {
//         return n;
//     }
//     return friendsPairing(n - 1) + friendsPairing(n - 2) * (n - 1);
// }
// int main()
// {
//     cout << friendsPairing(4) << endl;
//     return 0;
// }

// #5
#include <iostream>
using namespace std;

int friendspairing(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }
    return friendspairing(n - 1) + friendspairing(n - 2) + (n - 1);
}

int main()
{
    cout << friendspairing(4) << endl;
    return 0;
}