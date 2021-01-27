// print all possible permutaion of string.

// sample output:
// ABC
// ACB
// BAC
// BCA
// CAB
// CBA

// #include <iostream >
// using namespace std;

// void permutaion(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         string ros = s.substr(0, i) + s.substr(i + 1);

//         permutaion(ros, ans + ch);
//     }
// }

// int main()
// {
//     permutaion("ABC", "");

//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// void permutaion(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }

//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         string ros = s.substr(0, i) + s.substr(i + 1);
//         permutaion(ros, ans + ch);
//     }
// }

// int main()
// {
//     permutaion("ABC", "");
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// void permutaion(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         string ros = s.substr(0, i) + s.substr(i + 1);

//         permutaion(ros, ans + ch);
//     }
// }
// int main()
// {
//     permutaion("ABC", "");
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// void permutaion(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         string ros = s.substr(0, i) + s.substr(i + 1);

//         permutaion(ros, ans + ch);
//     }
// }

// int main()
// {
//     permutaion("DEF", "");
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// void permutaion(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         string ros = s.substr(0, i) + s.substr(i + 1);
//         permutaion(ros, ans + ch);
//     }
// }

// int main()
// {
//     permutaion("ABC", "");
//     return 0;
// }

// #5
#include <iostream>
using namespace std;

void permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);

        permutation(ros, ans + ch);
    }
}
int main()
{
    permutation("ABD", "");
    return 0;
}