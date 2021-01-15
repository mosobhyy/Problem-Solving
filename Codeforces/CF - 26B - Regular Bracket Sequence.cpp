#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<char> s;
    string str;
    int sum = 0;
    cin >> str;
    for (char i : str)
    {
        if (i == '(')
            s.push(i);
        else
        {
            if (!s.empty() && s.top() == '(')
            {
                s.pop();
                sum += 2;
            }
        }
    }
    cout << sum;
    return 0;
}
