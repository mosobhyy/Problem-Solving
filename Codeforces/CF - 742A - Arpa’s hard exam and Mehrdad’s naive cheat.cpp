#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int result[4] = {8, 4, 2, 6};
    int n;
    cin >> n;
    if (n == 0)
        cout << "1";
    else
        cout << result[((n - 1) % 4)];
    return 0;
}
