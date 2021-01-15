#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string keyboard = {"qwertyuiopasdfghjkl;zxcvbnm,./"}, str;
    char direction;
    int index;
    cin >> direction >> str;

    if (direction == 'R')
        index = -1;
    else
        index = +1;

    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < keyboard.size(); j++)
        {
            if (keyboard[j] == str[i])
            {
                cout << keyboard[j + index];
                break;
            }
        }
    }
    return 0;
}
