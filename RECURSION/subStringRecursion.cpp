// generate all substring of a string

// sample output:
// C
// B
// BC
// A
// AC
// AB
// ABC

// #1
// #include <iostream>
// using namespace std;

// void substring(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     string ros = s.substr(1);

//     substring(ros, ans);
//     substring(ros, ans + ch);
// }

// int main()
// {
//     substring("ABC", "");
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// void subseq(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }

//     char ch = s[0];
//     string ros = s.substr(1);

//     subseq(ros, ans);
//     subseq(ros, ans + ch);
// }
// int main()
// {
//     subseq("XYZ", "");
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// void subseq(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     string ros = s.substr(1);

//     subseq(ros, ans);
//     subseq(ros, ans + ch);
// }
// int main()
// {
//     subseq("ABC", "");
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// void subseq(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     string ros = s.substr(1);

//     subseq(ros, ans);
//     subseq(ros, ans + ch);
// }
// int main()
// {
//     subseq("abc", "");
//     return 0;
// }

// #5
#include <iostream>
using namespace std;

void subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans + ch);
}

int main()
{
    subseq("ABC", "");
    return 0;
}