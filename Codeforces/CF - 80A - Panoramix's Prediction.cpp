#include <iostream>

using namespace std;

bool isPrime(int num)
{
    if (num<=1)
        return false;
    for (int i=2 ; i<=num/2 ; i++)
        if (num%i==0)
            return false;
    return true;
}

int main()
{
    bool key = true;
    int x, y;
    cin >> x >> y;
    if (y-x == 1 || isPrime(x) == 0 || isPrime(y) == 0)
        key = false;
    for (int i=x+1 ; i<y; i++)
    {
        if (isPrime(i))
        {
            key = false;
            break;
        }
    }
    if (x==2 && y==3)
        key = true;
    if (key)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

