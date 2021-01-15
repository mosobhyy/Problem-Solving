#include <iostream>

using namespace std;

int main()
{
    int num, loop;
    cin >> num >> loop;
    for (int i=0 ; i<loop ; i++)
    {
        if (num%10==0)
            num /= 10;
        else
            num--;
    }
    cout << num;
    return 0;
}

