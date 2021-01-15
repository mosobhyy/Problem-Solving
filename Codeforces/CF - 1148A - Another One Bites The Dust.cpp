#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    a += c;
    b += c;
    if(a<b)
        cout << (2*a)+1;
    else if(a>b)
        cout << (2*b)+1;
    else
        cout << 2*a;
    return 0;
}
