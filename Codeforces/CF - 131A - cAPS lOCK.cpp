#include <iostream>

using namespace std;

int main()
{
    string s;
    bool change=true;
    cin >> s;
    for (unsigned int i=0 ; i<s.size() ; i++)
    {
        if ( int(s[i])>96 && i!=0)
            change = false;
    }
    if (change)
        for (unsigned int i=0 ; i<s.size() ; i++)
            if ( int(s[i]>96) )
                s[i] = char( int(s[i])-32 );
            else
                s[i] = char( int(s[i])+32 );
    cout << s;
    return 0;
}

