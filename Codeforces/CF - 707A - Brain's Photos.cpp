#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool blackWhite = true;
    char color;
    int n, m;
    cin >> n >> m;
    for(int i = 0 ; i < n*m ; i++)
    {
        cin >> color;
        if(color == 'C' || color == 'M' || color == 'Y')
            blackWhite = false;
    }
    if(blackWhite)
        cout << "#Black&White";
    else
        cout << "#Color";
    return 0;
}
