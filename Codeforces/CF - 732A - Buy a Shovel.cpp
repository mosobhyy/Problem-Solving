#include <iostream>

using namespace std;

int main()
{
    int price, change, shovels=1;
    cin >> price >> change;
    while (true)
    {
        if ( (shovels*price)%10 == 0 || (shovels*price-change)%10 == 0)
            break;
        shovels++;
    }
    cout << shovels;
    return 0;
}

