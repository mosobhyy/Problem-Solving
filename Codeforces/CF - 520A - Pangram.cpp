#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    string str;
    cin >> size >> str;
    for (int i = 65; i < 91; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (int(str[j]) == i || int(str[j]) == i + 32)
            {
                break;
            }
            else if (j == size - 1)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}
