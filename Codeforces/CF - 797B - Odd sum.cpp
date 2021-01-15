#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x > 0)
            sum += x;
        else
            x *= -1;
        a.insert(x);
    }
    while (sum % 2 == 0)
    {
        if (*a.begin() % 2 != 0)
            sum -= *a.begin();
        a.erase(a.begin());
    }
    cout << sum;
    return 0;
}
