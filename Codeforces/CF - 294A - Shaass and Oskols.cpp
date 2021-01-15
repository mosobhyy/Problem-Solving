#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, m, x, y;
    cin >> n;
    int arr[n];
    for (size_t i = 1; i <= n; i++)
        cin >> arr[i];
    cin >> m;
    for (size_t i = 1; i <= m; i++)
    {
        cin >> x >> y;
        arr[x-1] += y-1;
        arr[x+1] += arr[x] - y;
        arr[x] = 0;
    }
    for (size_t i = 1; i <= n; i++)
        cout << arr[i] << endl;
    return 0;
}
