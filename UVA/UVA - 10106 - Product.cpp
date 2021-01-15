#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x, y;
    while (cin >> x >> y)
    {
        int arr[600] = {0};
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
        for (int i = 0; i < y.size(); i++)
        {
            for (int j = 0; j < x.size(); j++)
            {
                arr[i + j] += (y[i] - '0') * (x[j] - '0');
            }
        }
        for (int i = 0; i < 599; i++)
        {
            arr[i + 1] += arr[i] / 10;
            arr[i] %= 10;
        }
        for (int i = 599; i >= 0; i--)
        {
            if (arr[i] != 0 || i == 0)
            {
                for (int j = i; j >= 0; j--)
                    cout << arr[j];
                break;
            }
        }
        cout << endl;
    }
    return 0;
}