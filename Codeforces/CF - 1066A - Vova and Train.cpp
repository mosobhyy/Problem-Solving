#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long ans = 0;
    int n;
    cin >> n;
    vector<long long> d(n), prefix(n), suffix(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        if (i == n - 1)
            suffix[i] = d[i];
        if (i == 0)
            prefix[i] = d[i];
        else
            prefix[i] = d[i] + prefix[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
        suffix[i] = d[i] + suffix[i + 1];

    int i = 0, j = n - 1;
    while (i < j)
    {
        if (prefix[i] == suffix[j])
        {
            ans = prefix[i];
            i++;
            j--;
        }
        else if (prefix[i] > suffix[j])
            j--;
        else
            i++;
    }
    cout << ans;
    return 0;
}