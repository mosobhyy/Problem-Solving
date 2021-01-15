#include <iostream>

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int result = 0;
    string str1, str2;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.size() ; i++)
    {
        if ( int(str1[i]) > 96 )
            str1[i] = int( int(str1[i]) - 32 );
        if ( int(str2[i]) > 96 )
            str2[i] = int( int(str2[i]) - 32 );
    }

    for (int i = 0; i < str1.size() ; i++)
    {
        if ( int(str1[i]) > int(str2[i]) )
        {
            result = 1;
            break;
        }
        else if ( int(str1[i]) < int(str2[i]) )
        {
            result = -1;
            break;
        }
    }
    cout << result << endl;
    return 0;
}

