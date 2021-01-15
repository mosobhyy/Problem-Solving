#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if(str.size() == 1)
            break;
        if (str[i] != str[i + 1] && i != str.size()-1)
        {
            str.erase(i, 2);
            if (i == 0)
                i--;
            else
                i -= 2;
        }
    }
    cout << str.size();
    return 0;
}
