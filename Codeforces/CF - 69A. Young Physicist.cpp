#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[3] = {0, 0, 0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            arr[j] += x;
        }
    }
    if (arr[0] != 0 || arr[1] != 0 || arr[2] != 0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
