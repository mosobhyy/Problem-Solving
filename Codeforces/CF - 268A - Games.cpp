#include <iostream>

using namespace std;

int main()
{
    int teams;
    cin >> teams;
    int matches[teams*2], total=0;

    for (int i=0 ; i<teams*2 ; i++)
    {
        cin >> matches[i];
    }

    for (int i=0 ; i<teams*2 ; i+=2)
        for (int x=1 ; x<teams*2 ; x+=2)
            if (matches[i] == matches[x])
                total++;
    cout << total;
    return 0;
}

