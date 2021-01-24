// generate all subsequence of given string along with it's ASCII code.

// sample output:
// B
// 66
// A
// AB
// A66
// 65
// 65B
// 6566

// #include <iostream>
// using namespace std;

// void subseqAscii(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     int code = ch;
//     string ros = s.substr(1);

//     subseqAscii(ros, ans);
//     subseqAscii(ros, ans + ch);
//     subseqAscii(ros, ans + to_string(code));
// }

// int main()
// {
//     subseqAscii("AB", "");
//     return 0;
// }

// #1
// #include <iostream>
// using namespace std;

// void subseqAscii(string s, string res)
// {
//     if (s.length() == 0)
//     {
//         cout << res << endl;
//         return;
//     }

//     char ch = s[0];
//     int code = ch;
//     string ros = s.substr(1);

//     subseqAscii(ros, res);
//     subseqAscii(ros, res + ch);
//     subseqAscii(ros, res + to_string(code));
// }

// int main()
// {
//     subseqAscii("XY", "");
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// void ssubseqAscii(string s, string res)
// {
//     if (s.length() == 0)
//     {
//         cout << res << endl;
//         return;
//     }

//     char ch = s[0];
//     int code = ch;
//     string ros = s.substr(1);

//     ssubseqAscii(ros, res);
//     ssubseqAscii(ros, res + ch);
//     ssubseqAscii(ros, res + to_string(code));
// }

// int main()
// {
//     ssubseqAscii("AB", "");
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// void subseqAscii(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     int code = ch;
//     string ros = s.substr(1);

//     subseqAscii(ros, ans);
//     subseqAscii(ros, ans + ch);
//     subseqAscii(ros, ans + to_string(code));
// }

// int main()
// {
//     subseqAscii("ab", "");
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// void subseqAscii(string s, string res)
// {
//     if (s.length() == 0)
//     {
//         cout << res << endl;
//         return;
//     }
//     char ch = s[0];
//     int code = ch;
//     string ros = s.substr(1);

//     subseqAscii(ros, res);
//     subseqAscii(ros, res + ch);
//     subseqAscii(ros, res + to_string(code));
// }

// int main()
// {
//     subseqAscii("AB", "");
//     return 0;
// }

# 5
#include <iostream>
using namespace std;

void subseqAscii(string s, string res)
{
    if (s.length() == 0)
    {
        cout << res << endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subseqAscii(ros, res);
    subseqAscii(ros, res + ch);
    subseqAscii(ros, res + to_string(code));
}

int main()
{
    subseqAscii("XZ", "");
    return 0;
}