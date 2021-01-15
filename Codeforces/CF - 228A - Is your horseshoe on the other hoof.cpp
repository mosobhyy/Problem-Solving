#include <iostream>

using namespace std;

int main()
{
    int valera[4], repeated=0;
    for (int i=0 ; i<4; i++)
        cin >> valera[i];
    for (int i=0 ; i<3 ; i++)
    {
        for(int x=i+1 ; x<4 ; x++)
        {
            if (valera[i] == valera[x])
            {
                repeated++;
                break;
            }
        }
    }
    cout << repeated;
    return 0;
}

