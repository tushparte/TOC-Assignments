#include <bits/stdc++.h>

using namespace std;

int dfa = 0;

void start(char c)
{
    if (c == 'a')
        dfa = 1;
    else
        dfa = -1;
}

void state1(char c)
{
    if (c == 'b')
        dfa = 2;
    else
        dfa = -1;
}

void state2(char c)
{
    if (c == 'a' || c=='b')
        dfa = 0;
    else
        dfa = -1;
}

bool isAccepted(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        switch (dfa)
        {
        case 0:
            cout << "start -> ";
            start(s[i]);
            break;
        case 1:
            cout << "state1 -> ";
            state1(s[i]);
            break;
        case 2:
            cout << "state2 -> ";
            state2(s[i]);
            break;
        default:
            cout << "invalid input ->";
            return false;
        }
    }
    return dfa == 0;
}

int main()
{
    string s;
    cin >> s;
    if (isAccepted(s))
        cout << "Accepted\n";
    else
        cout << "Not Accepted\n";
    return 0;
}