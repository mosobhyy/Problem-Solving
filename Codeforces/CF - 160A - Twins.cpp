#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, half = 0, sum = 0, coins = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        half += arr[i];
    }
    half /= 2;
    sort(arr, arr + n);
    reverse(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        if (sum > half)
            break;
        sum += arr[i];
        coins++;
    }
    cout << coins;
    return 0;
}
