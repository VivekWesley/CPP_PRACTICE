// remove all duplicate characters from a given string.

// sample output:
// abecd
// #1
// #include <iostream>
// using namespace std;

// string removeDup(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }
//     char ch = s[0];
//     string ans = removeDup(s.substr(1));
//     if (ch == ans[0])
//     {
//         return ans;
//     }
//     return (ch + ans);
// }

// int main()
// {
//     cout << removeDup("aaaabbbeeecdddd") << endl;
//     return 0;
// }

// #2
// #include <iostream>
// using namespace std;

// string removeDup(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }

//     char ch = s[0];
//     string ans = removeDup(s.substr(1));
//     if (ch == ans[0])
//     {
//         return ans;
//     }
//     return (ch + ans);
// }

// int main()
// {
//     cout << "ans: " << endl;
//     cout << removeDup("aaaabbbeeecdddd") << endl;
//     return 0;
// }

// #3
// #include <iostream>
// using namespace std;

// string removeDup(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }
//     char ch = s[0];
//     string ans = removeDup(s.substr(1));

//     if (ch == ans[0])
//     {
//         return ans;
//     }
//     return ch + ans;
// }

// int main()
// {
//     cout << removeDup("ddddkkkkkaaaaacccvfffkkkkdkl") << endl;
//     return 0;
// }

// #4
// #include <iostream>
// using namespace std;

// string removeDup(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }

//     char ch = s[0];
//     string ans = removeDup(s.substr(1));
//     if (ch == ans[0])
//     {
//         return ans;
//     }
//     return (ch + ans);
// }

// int main()
// {
//     cout << removeDup("jdjdjaggaiiiidhfffllllnbb");
//     return 0;
// }

// #5
#include <iostream>
using namespace std;

string removeDup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}

int main()
{
    cout << removeDup("aaaabbbeeecdddd") << endl;
    return 0;
}