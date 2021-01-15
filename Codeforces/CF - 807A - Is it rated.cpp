#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool unrated = false;
    int n, before, after, top;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> before >> after;
        if (i == 0)
            top = before;
        if (before != after)
        {
            cout << "rated";
            return 0;
        }
        else
        {
            if (after > top)
            {
                unrated = true;
            }
        }
        top = before;
    }
    if (unrated)
        cout << "unrated";
    else
        cout << "maybe";
    return 0;
}
