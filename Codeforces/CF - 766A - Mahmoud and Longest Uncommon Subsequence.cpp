#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if(a.size() > b.size())
        cout << a.size();
    else if(a.size() < b.size())
        cout << b.size();
    else
    {
        for(int i = 0 ; i< a.size() ; i++)
        {
            if(a[i] != b[i])
            {
                cout << a.size();
                return 0;
            }
        }
        cout << "-1";
    }
    return 0;
}
