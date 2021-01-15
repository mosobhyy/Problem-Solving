#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q, l;
    cin >> n >> p;
    bool arr[n];
    for(int i = 0 ; i < n ; i++)
        arr[i] = false;
    for(int i = 0 ; i < p ; i++)
    {
        cin >> l;
        arr[l-1] = true;
    }
    cin >> q;
    for(int i = 0 ; i < q ; i++)
    {
        cin >> l;
        arr[l-1] = true;
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(!arr[i])
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
    return 0;
}
