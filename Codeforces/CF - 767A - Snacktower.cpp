#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, current;
    cin >> num;
    current = num;
    bool snacks[num + 1];
    for (int i = 1; i <= num; i++)
        snacks[i] = false;
    for (int i = 1; i <= num; i++)
    {
        int newSnack;
        cin >> newSnack;
        snacks[newSnack] = true;
        if (newSnack == current)
        {
            cout << current;
            current--;
            while (current != 0)
            {
                if (!snacks[current])
                    break;
                cout << " " << current;
                current--;
            }
        }
        if (i != num)
            cout << endl;
    }
    return 0;
}
