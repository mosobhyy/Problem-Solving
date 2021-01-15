#include <iostream>
#include <algorithm>

using namespace std;

int max(int x, int y)
{
    return x>=y ? x : y;
}

int main()
{
    int y, w, d;
    cin >> y >> w;
    d = 7-max(y, w);
    cout << (d/__gcd(d, 6)) << "/";
    cout << (6/__gcd(d, 6));
    return 0;
}
