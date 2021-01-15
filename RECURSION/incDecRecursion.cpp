// print numbers till n in increasing and decreasing order

// sample output:
// enter a number:
// 4
// dec order:
// 4
// 3
// 2
// 1
// inc order:
// 1
// 2
// 3
// 4

// #1
// #include <iostream>
// using namespace std;

// void dec(int n)
// {
//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return;
//     }
//     cout << n << endl;
//     dec(n - 1);
// }

// void inc(int n)
// {
//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return;
//     }

//     inc(n - 1);
//     cout << n << endl;
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;
//     cout << "dec order: " << endl;
//     dec(n);
//     cout << "inc order: " << endl;
//     inc(n);

//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// void dec(int n)
// {
//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return;
//     }
//     cout << n << endl;
//     dec(n - 1);
// }

// void inc(int n)
// {
//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return;
//     }
//     inc(n - 1);
//     cout << n << endl;
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "dec: " << endl;
//     dec(n);
//     cout << "dec: " << endl;
//     inc(n);

//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// void inc(int n)
// {
//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return;
//     }
//     inc(n - 1);
//     cout << n << endl;
// }

// void dec(int n)
// {
//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return;
//     }
//     cout << n << endl;
//     dec(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "inc:  " << endl;
//     inc(n);
//     cout << "dec: " << endl;
//     dec(n);

//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// void inc(int n)
// {
//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return;
//     }
//     inc(n - 1);
//     cout << n << endl;
// }

// void dec(int n)
// {
//     if (n == 1)
//     {
//         cout << "1" << endl;
//         return;
//     }
//     cout << n << endl;
//     dec(n - 1);
// }

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     cout << "inc: " << endl;
//     inc(n);
//     cout << "dec: " << endl;
//     dec(n);

//     return 0;
// }

// #5
#include <iostream>
using namespace std;

void inc(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    inc(n - 1);
    cout << n << endl;
}

void dec(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    cout << n << endl;
    dec(n - 1);
}

int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;
    cout << "inc: " << endl;
    inc(n);
    cout << "dec: " << endl;
    dec(n);

    return 0;
}