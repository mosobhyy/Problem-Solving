#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int step, mod;
    while (cin >> step >> mod)
    {
        int i = 0, start = 0;
        for (i = 0; i < mod; i++)
        {
            start = (start + step) % mod;
            if (start == 0)
                break;
        }
        cout << setw(10) << step << setw(10) << mod << "    ";
        (i == mod - 1) ? cout << "Good Choice\n\n" : cout << "Bad Choice\n\n";
    }
    return 0;
}