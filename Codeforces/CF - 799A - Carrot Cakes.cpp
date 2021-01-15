#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t, k, d, one, two;
    cin >> n >> t >> k >> d;
    int x = ceil((double) d / t);
    n = n - (x * k);
    if (n > 0)
    {
        if (d%t == 0)
        {
            if(n > k)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
