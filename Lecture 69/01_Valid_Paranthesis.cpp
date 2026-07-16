// leetcode 20
#include <iostream>
#include <stack>
using namespace std;

class Solution
{
    stack<char> s;

public:
    bool isValid(string str)
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            { // opening
                s.push(str[i]);
            }
            else
            { // closing
                if (s.size() == 0)
                {
                    return false;
                }
                if ((s.top() == '(' && str[i] == ')') || (s.top() == '{' && str[i] == '}') || (s.top() == '[' && str[i] == ']'))
                {
                    s.pop();
                }
                else
                { // no match
                    return false;
                }
            }
        }
        return s.size() == 0;
    }
};

// Clearner version
// bool isValid(string str) {
//     stack<char> s;

//     for (char ch : str) {
//         if (ch == '(' || ch == '{' || ch == '[') {
//             s.push(ch);
//         } else {
//             if (s.empty())
//                 return false;

//             if ((ch == ')' && s.top() == '(') ||
//                 (ch == '}' && s.top() == '{') ||
//                 (ch == ']' && s.top() == '[')) {
//                 s.pop();
//             } else {
//                 return false;
//             }
//         }
//     }

//     return s.empty();
// }

int main()
{
    Solution s;
    string str = "(({[]}))";
    bool ans = s.isValid(str);
    cout << "Valid Parenthesis " << ans << endl;
    return 0;
}