#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n, x, a;
    cin >> n >> x >> a;
    while (a % x != 0)
        a--;
    cout << ceil(double (n*x)/a);
    return 0;
}
