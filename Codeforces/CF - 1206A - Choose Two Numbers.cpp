#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool found = false;
    int n, m;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; ++i)
        cin >> arr1[i];
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; ++i)
        cin >> arr2[i];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int sum = arr1[i] + arr2[j];
            for (int k = 0; k < n; ++k)
            {
                if(sum == arr1[k])
                {
                    found = true;
                    break;
                }
            }
            if(found)
            {
                found = false;
                continue;
            }
            for (int k = 0; k < m; ++k)
            {
                if(sum == arr2[k])
                {
                    found = true;
                    break;
                }
            }
            if(found)
            {
                found = false;
                continue;
            }
            else
            {
                cout << arr1[i] << " " << arr2[j];
                return 0;
            }
            cout << "Sum: " << sum << endl;
        }
    }
    return 0;
}
